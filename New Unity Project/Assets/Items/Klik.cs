using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class Klik : MonoBehaviour {

	public Button levo, desno;
	public Collider2D igrac;
	private float time = 1f;
	private float x;
	// Use this for initialization
	void Start () {
		levo.onClick.AddListener (this.KlikLevo);
		desno.onClick.AddListener (this.KlikDesno);
	}
	
	// Update is called once per frame
	void Update () {
	}

	private void KlikDesno(){
		if(igrac.transform.position.x <= 1f){
			Vector3 trenutnapoz = igrac.transform.position;
			Vector3 desnaPozicija = new Vector3 (igrac.transform.position.x + 2, igrac.transform.position.y, igrac.transform.position.z);
			igrac.transform.position = Vector3.Lerp(trenutnapoz, desnaPozicija, time);
		}
	}

	private void KlikLevo(){
		if (igrac.transform.position.x >= -1f) {
			Vector3 trenutnapoz = igrac.transform.position;
			Vector3 levaPozicija = new Vector3 (igrac.transform.position.x - 2, igrac.transform.position.y, igrac.transform.position.z);
			igrac.transform.position = Vector3.Lerp (trenutnapoz, levaPozicija, time);
		}
	}
}
