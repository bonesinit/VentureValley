/*
	File:		Scene.cpp
	Author:		Brandon White
*/

#include "TextAdventure.h"

int Scene::play(int specialReqs[15]) {

	system("CLS");

	int validOptions = 0;

// PRINT STORY AND OPTIONS

	for (int i = 0; i < numStoryLines; i++) {
		cout << storyLines[i] << endl;
	}

	cout << endl;

	for (int i = 0; i < numBaseOptions; i++) {
		cout << i << " - " << baseOptions[i] << endl;
		validOptions++;
	}
	
	for (int i = 0; i < 15; i++) {
		if (specialReqs[i] != 0) {

		}
	}

// GET ANSWER, CHECK VALIDITY

// CONVERT ANSWER IF NEEDED

// RETURN ANSWER
}