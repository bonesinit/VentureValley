/*
	File:		Quest.h
	Author:		Brandon White
*/

#pragma once

#include "TextAdventure.h"

class Quest
{
public:
	Scene* first;

	int inputVars[10];
	int outputVars[10];

	void start();
};

