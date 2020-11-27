/*
	File:		Scene.h
	Author:		Brandon White

	------------------------------
	How Special Requirements Work:
	------------------------------

	-	There are 15 special requirements that you can use in the Scene->play() function to have special options only show up in certain cases. 
	-	You need to set up requirements THE LINE BEFORE you call play();
	-	This is because play needs to take in an array of requirements in order to work.
	-	See "How To Set Up a Scene" for an example.
	-	Here's all of the requirements you can take advantage of:
		--------------------------------------------------------------------------
		INDEX			|	REQUIREMENT					|	Value
		--------------------------------------------------------------------------
		specialReqs[0] 	|	Warrior Class Req.			|	True or False (1 or 0)
		specialReqs[1] 	|	Rogue Class Req.			|	True or False (1 or 0)
		specialReqs[2] 	|	Ranger Class Req.			|	True or False (1 or 0)
		specialReqs[3] 	|	Mage Class Req.				|	True or False (1 or 0)
		specialReqs[4]	|	Bard Class Req.				|	True or False (1 or 0)
		specialReqs[5] 	|	Necromancer Class Req.		|	True or False (1 or 0)
		specialReqs[6]	|	Strength Req.				|	(Min skill to pass)
		specialReqs[7]	|	Agility Req.				|	(Min skill to pass)
		specialReqs[8]	|	Intelligence Req.			|	(Min skill to pass)
		specialReqs[9]	|	Charisma Req.				|	(Min skill to pass)
		specialReqs[10] |	Luck Req.					|	(Min skill to pass)
		specialReqs[11] |	Item A Req.					|	(Required item ID)
		specialReqs[12] |	Item B Req.					|	(Required item ID)
		specialReqs[13] |	Event A Req.				|	(Required event value)
		specialReqs[14] |	Event B Req.				|	(Required event value)
		-------------------------------------------------------------------------
	- Set any of the above requirements to  0 if you want them to be ignored in the scene player.

	--------------------------
	Scene Setup/Usage Example:
	--------------------------
	Under "// SCENE SETUP"

		// Basement Rats
		Scene BasementRats_1A = new Scene();
	
*/

#pragma once
#include "TextAdventure.h"

class Scene
{
public:
	string storyLines[5];
	string baseOptions[5];
	string specialOptions[15];

	int numStoryLines;
	int numBaseOptions;

	int play(int specialReqs[15]);	
};

