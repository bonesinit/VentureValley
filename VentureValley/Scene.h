/*
	File:		Scene.h
	Author:		Brandon White
*/

#pragma once
#include <string>

using namespace std;

class Scene
{
public:
	Scene* next;

	string story;
	string choices[5];
	string hiddenChoices[5];


	void play(Scene &scene, int playerClass);

};

