#include <iostream>
#include <vector>
#include <string>

	using std::cout;
	using std::cin;
	using std::endl;
	using std::vector;
	using std::string;

int main(int argc, char *argv[])
{

// Section 9 challenge (create a progam with a loop menu where the user can navigate and explore functions)	
	
	int selector {0};

	int created {0};
	string character_name {"Not created"};
	int hp {0};
	int max_hp {0};
	int level {0};
	string character_class {"Not created"};
	int stats[6] {0};
	vector <string> classes {"Artificier", "Barbarian", "Bard", "Cleric", "Druid", "Fighter", "Paladin", "Ranger", "Rogue", "Sorcerer", "Warlock", "Wizard"};
	int quit {0};

	cout << "Welcome to the DnD character manager!!" << endl;
	cout << "Please choose what you want to do from the options below" << endl;
	cout << endl;
	cout << "1 - Add a new character" << endl;
	cout << "2 - Edit the character" << endl;
	cout << "3 - Manage HP" << endl;
	cout << "4 - Erase character" << endl;
	cout << "5 - Quit" << endl;
	cout << endl;

	cin >> selector;

	while (1) //infinite loop
	{
		switch (selector)
		{
		case 1:
			if (created == 0)
			{
				cout << "Please enter the character name: ";
				getline(cin, character_name);
				cout << endl;
				cout << "Plese choose a class for your character from the ones listed below:" << endl;
				for(string classe: classes)
				{
					cout << classe << endl;	
				}
				getline(cin, character_class);

			}
			else
			{
				cout << "There is a character created already, if you want to create a new character please erase the current one first.";
			}
			
			break;

		case 2: // see or edit character
			/* code */
			break;
		
		case 3: // manage hp
			cout << "Please, enter your current hp: ";
			cin >> hp;
			cout << endl;
			cout << "HP atualized" << endl; 
			break;
		
		case 4: //erase character
			if (created == 1)
			{
				character_name = "Not created";
				character_class = "Not created";
				level = 0;
				for (int stat: stats)
				{
					stat = 0;
				}
				hp = 0;
				max_hp = 0;
				created = 0;
			}
			else
			{
				cout << "There is no character created to be erased" << endl;
			}
			break;		
		
		case 5: //quit
			quit = 1;
			break;
		
		default:
			cout << "Sorry, please enter a valid option" << endl;
			break;
		}

		if (quit == 1)
		{
			break;
		}
	}
}    