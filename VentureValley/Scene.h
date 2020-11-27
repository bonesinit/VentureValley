/*
	File:		Scene.h
	Author:		Brandon White
*/

#pragma once
#include "TextAdventure.h"

class Scene
{
public:
	Scene* next;
	//Quest* quest;

	// Up to 5 lines so we don't have sentences run off screen.
	string story[5];
	int storyLength;	// 0 - 4, based on number of story space we use.

	string choices[5];
	string hiddenChoices[5];
	int numChoices;
	int numHiddenChoices;

	void play();
};

