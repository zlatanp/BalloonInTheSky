using UnityEngine.SceneManagement;
using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MainScript : MonoBehaviour {

	private Rigidbody2D rb;
	public Collider2D igrac;
	public Collider2D finis;
	public Collider2D brze;
	private Collider2D novcic;
	public AudioSource novcicSnd;
	public AudioSource youWin;
	public AudioSource main;
	public Text pointsText;
	private int poeni = 0;
	private float time = 0.001f;
	// Use this for initialization
	void Start () {
		novcic = GetComponent<Collider2D>();
		novcicSnd.mute = true;
		youWin.mute = true;
	}
	
	// Update is called once per frame
	void Update () {
		igrac.transform.position = Vector3.Lerp (transform.position, finis.transform.position, time);

		time += 0.00001f;
		pointsText.text = "Coins: " + poeni;

		if (igrac.transform.position.y > 100) {
			main.mute = true;
			youWin.mute = false;
			youWin.Play ();
			Invoke( "ChangeLevel", 3.0f );
		}

	}

	void ChangeLevel() {
		SceneManager.LoadScene(0);  
	}

	void OnTriggerEnter2D(Collider2D other)
	{
		if (other.tag == "Novcic") {

			novcicSnd.mute = false;
			novcicSnd.Play ();
			novcic = other;
			Destroy (novcic.gameObject);
			poeni++;

		}
	}
}
