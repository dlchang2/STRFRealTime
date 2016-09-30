using UnityEngine;
using System.Collections;

public class ElectrodeScript : MonoBehaviour {
	public int[] colorMask;
	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
	}

	public void updateColor(float amplitude){
		this.GetComponent<Renderer> ().material.SetColor ("_Color",  new Color (1.0f-colorMask[0]*amplitude, 1.0f-colorMask[1]*amplitude, 1.0f-colorMask[2]*amplitude));
//		this.transform.localScale.x = 0.1f*amplitude;
//		this.transform.localScale.y = 0.1f*amplitude;
//		this.transform.localScale.z = 0.1f*amplitude;
	}
}
