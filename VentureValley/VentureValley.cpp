#include <iostream>
#include "Menu.h"

using namespace std;

int main()
{
// SETUP MENU
	Menu* menu = new Menu();

// SETUP GAMEPLAY
	bool quit		=	false;	
	bool inMenu		=	true;	
	bool inGame		=	false;
	bool inQuest	=	false;	// If false we are in a village.

	int	 menuType	=	1;
	int	 menuChoice	=	0;

// SETUP QUESTS


// GAMEPLAY LOOP
	while (!quit) {
		while (inMenu) {
			menuChoice = menu->printMenu(menuType);

			/* 
				There are 4 menu types:
					1 - Main
					2 - Instructions 
					3 - Pause
					4 - Create character
					5 - Quit
			*/

			switch (menuChoice) {
			// Return to main menu.
			case 0:								
				menuType = 1;
				break;

			// Start a new game.
			case 1:
				menuType = 4;
				break;

			// Load a saved game.
			case 2:
				break;

			// Instructions
			case 3:
				menuType = 2;
				break;
			
			// Quit
			case 9:
				inMenu = false;
				quit = true;
				break;
			}
		}

		while (inGame) {
			while (!inQuest) {

			}

			while (inQuest) {

			}
		}
	}
}
