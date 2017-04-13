using UnityEngine.SceneManagement;
using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MainScript : MonoBehaviour {
	public Button ok;
	public Button izgubio;
	public Button yes;
	public Button no;
	private bool okispressed = false;
	private Rigidbody2D rb;
	public Collider2D igrac;
	public Collider2D finis;
	public Collider2D brze;
	private Collider2D novcic;
	public AudioSource novcicSnd;
	public AudioSource youWin;
	public AudioSource main;
	private GameObject okpanel;
	private GameObject loosepanel;
	private GameObject pobediopanel;
	public Text pointsText;
	private int poeni = 0;
	private float time = 0.001f;
	// Use this for initialization
	void Start () {
		okpanel = GameObject.Find("okpanel");
		loosepanel = GameObject.Find ("izgubiopanel");
		pobediopanel = GameObject.Find ("pobedio");
		loosepanel.SetActive (false);
		pobediopanel.SetActive (false);
		ok.onClick.AddListener (this.OkButtonPressed);
		izgubio.onClick.AddListener (this.IzgubioPressed);
		novcic = GetComponent<Collider2D>();
		novcicSnd.mute = true;
		youWin.mute = true;
		yes.onClick.AddListener (this.YesPressed);
		no.onClick.AddListener (this.IzgubioPressed);
	}
	
	// Update is called once per frame
	void Update () {

		if (okispressed) {
			okpanel.SetActive (false);
			igrac.transform.position = Vector3.Lerp (transform.position, finis.transform.position, time);

			time += 0.000001f;
			pointsText.text = "Coins: " + poeni;
		}

		if (igrac.transform.position.y > 120) {
			main.mute = true;
			youWin.mute = false;
			youWin.Play ();
			Invoke( "EndLevel", 3.0f );
			okispressed = false;
		}

	}

	void EndLevel() {
		if (poeni >= 10) {
			pobediopanel.SetActive (true);
		} else {
			loosepanel.SetActive (true);
		}
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

	void OkButtonPressed(){
		okispressed = true;
	}

	void IzgubioPressed(){
		SceneManager.LoadScene (0);
	}

	void YesPressed(){
		SceneManager.LoadScene (0);
	}
}
