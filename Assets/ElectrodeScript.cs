using UnityEngine;
using System.Collections;

public class ElectrodeScript : MonoBehaviour {

	// Use this for initialization
	public int r;
	public int g;
	public int b;

	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void updateColor(float amplitude){
		this.GetComponent<Renderer> ().material.SetColor ("_Color", new Color (1.0f-r*amplitude, 1.0f - g*amplitude, 1.0f - b*amplitude));
	}
}
