#pragma strict

import UnityEngine;
import UnityEngine.SceneManagement;

function NewGame() {
	SceneManager.LoadScene(1);	
//	SceneManager.UnloadSceneAsync(0);
}

function Settings() {
	SceneManager.LoadScene(2);

}

function About() {
	SceneManager.LoadScene(3);

}

function MainMenu() {
	SceneManager.LoadScene(0);
//	SceneManager.UnloadSceneAsync(2);

}

