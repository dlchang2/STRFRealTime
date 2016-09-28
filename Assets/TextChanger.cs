﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.IO;
using System.Text;
using System.Runtime.InteropServices;

public class TextChanger : MonoBehaviour {
	
	private float[] erps;
	private Vector3 pos;
	public GameObject prefab;
	private GameObject[] allElecs;
	private Material mat;
	private Vector3 realPosition;
	int[] phonemeSelectivity;
	int[] sigElecs; 
	private Vector3 scaleFactor;

	// Use this for initialization
	void Start () {
		// parse in and initialize electrodes and their phoneme selectivities
		allElecs = new GameObject [256];
		phonemeSelectivity = new int[256];
		sigElecs = new int[256];
		string elecTxt = (Resources.Load("TDT_elecs_locs") as TextAsset).text;
		string[] psiTxt = (Resources.Load("PSI_max") as TextAsset).text.Split(' ');
		string[] elecCoords = elecTxt.Split('\n');
		string[] sigElecsTxt = (Resources.Load("sig_elecs") as TextAsset).text.Split('\n');
		for (int e = 0; e<256; e++) {
			string[] tmp = elecCoords [e].Split (' ');
			pos = new Vector3 (-1.0f*float.Parse (tmp [4]), float.Parse (tmp [5]), float.Parse (tmp [6]));
			phonemeSelectivity[e] = int.Parse (psiTxt [e]);
			sigElecs [e] = int.Parse (sigElecsTxt [e]);
			if (sigElecs[e]==1)
				allElecs[e] = (GameObject)Instantiate (prefab, pos, Quaternion.identity);
		}
		erps = new float[256];
	}

	// Update is called once per frame
	void Update () {
		if (Input.GetMouseButton (0)) {
			realPosition = new Vector3 (0.0f, this.transform.position.y,-5.0f);
			transform.LookAt (realPosition);
			transform.RotateAround (realPosition, Vector3.up, Input.GetAxis ("Mouse X") * 20.0f);
		}
		updateErpString ();
		for (int e = 0; e < 256; e++) {
			if (sigElecs [e] == 1) {
				scaleFactor.x = 0.1f*erps [e];
				scaleFactor.y = 0.1f*erps [e];
				scaleFactor.z = 0.1f*erps [e];
				allElecs [e].transform.localScale = scaleFactor;

				switch (phonemeSelectivity [e]) {
				case 1: 
					allElecs [e].GetComponent<Renderer> ().material.SetColor ("_Color", new Color (1.0f, 1.0f - erps [e], 1.0f - erps [e]));
					break;
				case 2: 
					allElecs [e].GetComponent<Renderer> ().material.SetColor ("_Color", new Color (1.0f - erps [e], 1.0f - erps [e], 1.0f));
					break;
				case 3: 
					allElecs [e].GetComponent<Renderer> ().material.SetColor ("_Color", new Color (1.0f - erps [e], 1.0f, 1.0f - erps [e]));
					break;
				case 4: 
					allElecs [e].GetComponent<Renderer> ().material.SetColor ("_Color", new Color (1.0f, 1.0f - erps [e], 1.0f));
					break;
				case 5: 
					allElecs [e].GetComponent<Renderer> ().material.SetColor ("_Color", new Color (1.0f, 1.0f, 1.0f - erps [e]));
					break;
				case 6: 
					allElecs [e].GetComponent<Renderer> ().material.SetColor ("_Color", new Color (1.0f - erps [e], 1.0f, 1.0f));
					break;
				}
			}
		}
	}

	void changeDropdown(int i){
		
	}

	void erpUpdate(string s){
		string[] floatStrings = s.Split (',');
		for (int i = 0; i < 256; i++) {
			erps [i] = float.Parse (floatStrings [i]);
		}
	}

	[DllImport("__Internal")]
	private static extern void updateErpString();

	[DllImport("__Internal")]
	private static extern void debugPrint(string s);
}