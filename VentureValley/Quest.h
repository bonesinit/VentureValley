/*
	File:		Quest.h
	Author:		Brandon White
*/

#pragma once

#include "Scene.h"

class Quest
{

public:
	Scene* first;

	int playerClass;

	int questVars[10];

	void start();
};

