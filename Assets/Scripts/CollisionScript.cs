using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CollisionScript : MonoBehaviour {

	public Text scoreText;

	// Use this for initialization
	void Start () {
		scoreText.text = "No collision";
	}


	void OnTriggerEnter(Collider other) {
		if (other.gameObject.CompareTag ("Wire")) {

			scoreText.text = "Collision Detected";
			Handheld.Vibrate ();

		}

	}


	void OnTriggerExit(Collider other){
		if (other.gameObject.CompareTag ("Wire")) {

			scoreText.text = "No collision";

		}

	}
}
