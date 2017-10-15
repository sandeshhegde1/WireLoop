﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CollisionScript : MonoBehaviour {

	public Text scoreText;
	public Text healthText;
	public Text starText;
	private int count;
	private int starsCount;
	private GameObject[] stars;

	// Use this for initialization
	void Start () {
		// scoreText.text = "No collision";
		scoreText.text = "";
		healthText.text = "Health : Three";
		starText.text = "Stars : 0";
		count = 3;
		starsCount = 0;
		GameObject.FindGameObjectWithTag("Wire").SetActive(true);
		stars = GameObject.FindGameObjectsWithTag("Star");
		foreach (GameObject star in stars)
		{
			star.SetActive(true);
		}
	}


	void OnTriggerEnter(Collider other) {
		if (other.gameObject.CompareTag ("Wire")) {

			scoreText.text = "Collision Detected";
			Handheld.Vibrate ();
			count--;
			switch(count) {
			case 2  :
				healthText.text = "Health : Two";
				break; /* optional */
			case 1 :
				healthText.text = "Health : One";
				break; /* optional */
			case 0 :
				healthText.text = "You die";
				scoreText.text = "Game over";
				break; /* optional */
			}
		}

		if (other.gameObject.CompareTag ("Star")) {
			starsCount++;
			starText.text = "Stars : " + starsCount;
			other.gameObject.SetActive (false);
		}

		if (other.gameObject.CompareTag ("StartCube")) {

			scoreText.text = "Begin Game";
			Handheld.Vibrate ();
			other.gameObject.SetActive (false);


		}

		if (other.gameObject.CompareTag ("EndCube")) {

			scoreText.text = "You Win!";
			Handheld.Vibrate ();


		}

	}


	void OnTriggerExit(Collider other){
		if (other.gameObject.CompareTag ("Wire")) {

			scoreText.text = "No collision";

		}

	}
}
