﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MCollisionScript : MonoBehaviour {

	//public Text gameStatusText;
	public Texture starFillTexture;
	private int healthcount;
	private int starsCount;
	private GameObject[] stars;
	private GameObject[] wires;
	[SerializeField]private GameObject loseImage;
	[SerializeField]private GameObject winImage;
	[SerializeField]private GameObject backImage;
	private bool gameBegin;
	// Use this for initialization
	void Start () {
		//gameStatusText.text = "Please start with start point!";
		loseImage.SetActive(false);	
		winImage.SetActive(false);
		backImage.SetActive(true);
		healthcount = 3;
		starsCount = 0;
		gameBegin = false;
		wires = GameObject.FindGameObjectsWithTag("Wire");
		foreach (GameObject wire in wires)
		{
			wire.SetActive(true);
		}
		stars = GameObject.FindGameObjectsWithTag("Star");
		foreach (GameObject star in stars)
		{
			star.SetActive(true);
		}
	}


	void OnTriggerEnter(Collider other) {
		//Game starts after pass the startCube
		if (other.gameObject.CompareTag ("StartCube")) {
			//gameStatusText.text = "Game starts!";
			Handheld.Vibrate ();
			other.gameObject.SetActive (false);
			gameBegin = true;
		}
		//If game starts
		if (gameBegin == true) {
			if (other.gameObject.CompareTag ("Wire")) {
				//gameStatusText.text = "Whoops Collision!";
				Handheld.Vibrate ();
				healthcount--;
				switch(healthcount) {
				case 2  :
					GameObject.FindGameObjectWithTag("Health3").SetActive(false);
					break; 
				case 1 :
					GameObject.FindGameObjectWithTag("Health2").SetActive(false);
					break;
				case 0:

					GameObject.FindGameObjectWithTag ("Health1").SetActive (false);
					stars = GameObject.FindGameObjectsWithTag("Star");
					foreach (GameObject star in stars)
					{
						star.SetActive(false);
					}
					wires = GameObject.FindGameObjectsWithTag("Wire");
					foreach (GameObject wire in wires)
					{
						wire.SetActive(false);
					}
					loseImage.SetActive(true);	
					backImage.SetActive(false);
					break; 
				}
			}
				
			if (other.gameObject.CompareTag ("Star")) {
				starsCount++;
				//gameStatusText.text = "Star collected!";
				switch(starsCount) {
				case 1  :
					GameObject.FindGameObjectWithTag("UiStar1").GetComponent<RawImage>().texture=(Texture) starFillTexture;
					break; 
				case 2 :
					GameObject.FindGameObjectWithTag("UiStar2").GetComponent<RawImage>().texture=(Texture) starFillTexture;
					break;
				case 3 :
					GameObject.FindGameObjectWithTag("UiStar3").GetComponent<RawImage>().texture=(Texture) starFillTexture;
					break;
				}
				Handheld.Vibrate ();
				other.gameObject.SetActive (false);
			}
				
			if (other.gameObject.CompareTag ("EndCube")) {
				other.gameObject.SetActive (false);
				winImage.SetActive(true);	
				backImage.SetActive(false);
				Handheld.Vibrate ();
			}
		}
		//If game doesn't start
		/*
		if (gameBegin == false) {
			if (other.gameObject.CompareTag ("Wire")) {
				gameStatusText.text = "Please start with start point!";
			}
			if (other.gameObject.CompareTag ("Star")) {
				gameStatusText.text = "Please start with start point!";
			}
			if (other.gameObject.CompareTag ("EndCube")) {
				gameStatusText.text = "Please start with start point!";
			}
		}	
		*/
	} 
		
}
