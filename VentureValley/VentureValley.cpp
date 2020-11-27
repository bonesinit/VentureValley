#include "TextAdventure.h"

int main()
{
// SETUP MENU
	Menu* menu = new Menu();

// SETUP GAME CONTROL
	bool quit		=	false;	
	bool inGame		=	false;	// If false we are in a menu.
	bool inQuest	=	false;	// If false we are in a village.

	int	menuType	=	1;
	int	menuChoice	=	0;

	int activeQuest =	0;
	int activeVillage = 0;

// SETUP QUESTS

// SAVED VARIABLES


// GAMEPLAY LOOP
	while (!quit) {
		while (!inGame) {
			// See "Menu.h" for documentation.
			menuChoice = menu->printMenu(menuType);

			/* 
				There are 5 menu types:
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
				inGame = true;
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

// CLEAR MEMORY
	delete menu;
}
