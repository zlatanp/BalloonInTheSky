using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraScript : MonoBehaviour {

	public Collider2D igrac;
	private float x;
	// Use this for initialization
	void Start () {
		x = igrac.transform.position.x;
	}
	
	// Update is called once per frame
	void Update () {
		if (igrac.transform.position.y < 105) {
			transform.position = new Vector3 (x, igrac.transform.position.y + 3, -1.5f);
		}
	}
}
