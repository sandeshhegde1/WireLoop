using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CollisionScript : MonoBehaviour {

	public Text scoreText;

	// Use this for initialization
	void Start () {
		// scoreText.text = "No collision";
		scoreText.text = "Start from the Start point!";
	}


	void OnTriggerEnter(Collider other) {
		if (other.gameObject.CompareTag ("Wire")) {

			scoreText.text = "Collision Detected";
			Handheld.Vibrate ();

		}

		if (other.gameObject.CompareTag ("StartCube")) {

			scoreText.text = "The Game was Started!";
			Handheld.Vibrate ();


		}

		if (other.gameObject.CompareTag ("EndCube")) {

			scoreText.text = "Good Job!";
			Handheld.Vibrate ();


		}

	}


	void OnTriggerExit(Collider other){
		if (other.gameObject.CompareTag ("Wire")) {

			scoreText.text = "No collision";

		}

	}
}
