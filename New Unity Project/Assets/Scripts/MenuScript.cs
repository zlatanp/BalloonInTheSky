using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuScript : MonoBehaviour {

	public Button startb, quitb;
	// Use this for initialization
	void Start () {
		quitb.onClick.AddListener (this.Quit);
		startb.onClick.AddListener (this.StartLevel);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void Quit(){
		Application.Quit ();
	}

	public void StartLevel(){
		SceneManager.LoadScene(1);
	}
}
