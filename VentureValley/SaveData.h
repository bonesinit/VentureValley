/*
	File:		Character.h
	Author:		Joshua Strutt
*/

#pragma once
using namespace std;
#include "TextAdventure.h"
#include "Item.h"


class SaveData {
public:
	
	//int questData[];
	//bool specialData[];

	string playerName;
	int playerStats[5]; //the saved stats
	int playerInventory[5]; //holds the ids for the items
	
	void saveGame(); //creates a notepad doc with savedata
	void loadGame(); //loads in the notepad doc

};