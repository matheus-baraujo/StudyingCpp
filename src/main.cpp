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
// Testing some Cpp sintax and getting used to it

	// int valor {0};
	// char texto[90];
	// std::cout << "Hello world!" << std::endl;
	// std::cout << "write a number please" << std::endl;
	// std::cin >> valor;

	// if (valor == 35)
	// {
	// 	std::cout << valor << std::endl;
	// 	std::cout << "ok, i already understood" << std::endl;
	// 	std::cout << "Please write a phrase" << std::endl;
	// 	std::cin >> texto;
	// 	std::cout << texto << std::endl;
	// }
	// else
	// {
	// 	std::cout << valor << std::endl;
	// std::cout << "Im starting to understand" << std::endl;	
	// }

// section 6 challenge (create a simple function that calculates the cost of a service, sorry for being a Dnd addict kk)

	// const int smallRoomCharge {25};
	// const int bigRoomCharge {35};
	// const float tax {0.06};

	// int numberSmallRoom {0};
	// int numberBigRoom {0};
	// int totalCost {0};

	// std::cout << "Hello!! Welcome to Whitestone Glamourous Tavern" << std::endl;
	
	// std::cout << "How many small rooms would you like to rent?" << std::endl;
	// std::cin >> numberSmallRoom;

	// std::cout << "How many big rooms would you like to rent?" << std::endl;
	// std::cin >> numberBigRoom;

	// totalCost = (25*numberSmallRoom)+(35*numberBigRoom);

	// std::cout << "This would cost you " << totalCost << " gold pieces." << std::endl;
	// std::cout << "With a tax of: " << totalCost*tax << " gold pieces." << std::endl;

	// std::cout << "This estimate is valid for 30 days" << std::endl;

	// std::vector <char> test;

// Section 7 challenge (create and manipulate 3 vectors)	

	// vector<int> vector1;
	// cout << "The size of the vector1 is " << vector1.size() << endl;
	// vector<int> vector2;
	// cout << "The size of the vector2 is " << vector2.size() << endl;
	
	// vector1.push_back(10);
	// cout << "The size of the vector1 is " << vector1.size() << endl;
	// cout << "Element added: " << vector1.at(0) << endl;
	// vector1.push_back(20);
	// cout << "The size of the vector1 is " << vector1.size() << endl;
	// cout << "Element added: " << vector1.at(1) << endl;
	// cout << "Elements:" << endl;
	// for (int i = 0; i <= vector1.size() - 1; i++)
	// {
	// 	cout << vector1.at(i) << " ";
	// }
	// cout << endl;
	
	// vector2.push_back(100);
	// cout << "The size of the vector2 is " << vector2.size() << endl;
	// cout << "Element added: " << vector2.at(0) << endl;
	// vector2.push_back(200);
	// cout << "The size of the vector2 is " << vector2.size() << endl;
	// cout << "Element added: " << vector2.at(1) << endl;
	// cout << "Elements:" << endl;
	// for ( int i = 0; i <= vector2.size() - 1; i++)
	// {
	// 	cout << vector2.at(i) << " ";
	// }
	// cout << endl;

	// vector <vector<int>> vector2d;
	// vector2d.push_back(vector1);
	// vector2d.push_back(vector2);
	// cout << "Elements of vector2d:" << endl;
	// for (int i = 0; i <= vector1.size()-1; i++)
	// {
	// 	for (int j = 0; j <= vector2.size()-1; j++)
	// 	{
	// 		cout << vector2d.at(i).at(j) << " ";
	// 	}
	// 	cout << endl;
	// }

// Section 8 challenge (DnD money exchanger)
	
	//test
	// cout << "Type the value and type of coin you want to exchange: ";
	
	// int value {0};
	// char coin [10];

	// int platinum {0};
	// int gold {0};
	// int silver {0};
	// int copper {0};

	// cin >> value;
	// cin >> coin;

	// cout << endl << value << " " << coin << endl;

	// // 1 platinum == 10 gold
	// // 1 gold == 10 silver
	// // 1 silver == 10 copper

	// if (coin != "platinum" && coin != "gold" && coin != "silver" && coin != "copper")
	// {
	// 	cout << "Coin not recognized, unfortunately we cant help." << endl;
	// }
	// else 
	// {
	// 	if (coin == "platinum")
	// 	{
	// 		gold = value*10;	
	// 	}
	// 	else if (coin == "gold")
	// 	{
	// 		if (value > 10)
	// 		{
	// 			platinum = value/10;
	// 			gold = value%10;	
	// 		}
	// 		else
	// 		{
	// 			silver = value*10;
	// 		} 
	// 	}
	// 	else if (coin == "silver")
	// 	{
	// 		if (value > 10)
	// 		{
	// 			gold = value/10;
	// 			silver = value%10;
	// 		}
	// 		else
	// 		{
	// 			copper = value*10;
	// 		}
	// 	}
	// 	else if (coin == "copper")
	// 	{
	// 		if (value > 10)
	// 		{
	// 			silver = value/10;
	// 			copper = value%10; 
	// 		}
	// 		else
	// 		{
	// 			copper = value;
	// 		}
	// 	}
		
	// 	cout << "Here is your exchanged money:" << endl;
	// 	cout << "Platinum: " << platinum << endl;
	// 	cout << "Gold: " << gold << endl;
	// 	cout << "Silver: " << silver << endl;
	// 	cout << "Copper: " << copper << endl;
	// }	

// Section 9 challenge (create a progam with a loop menu where the user can navigate and explore functions)	
	
	// int selector {0};

	// int created {0};
	// string character_name {"Not created"};
	// int hp {0};
	// int max_hp {0};
	// int level {0};
	// string character_class {"Not created"};
	// int stats[6] {0};
	// vector <string> classes {"Artificier", "Barbarian", "Bard", "Cleric", "Druid", "Fighter", "Paladin", "Ranger", "Rogue", "Sorcerer", "Warlock", "Wizard"};
	// int quit {0};

	// cout << "Welcome to the DnD character manager!!" << endl;
	// cout << "Please choose what you want to do from the options below" << endl;
	// cout << endl;
	// cout << "1 - Add a new character" << endl;
	// cout << "2 - Edit the character" << endl;
	// cout << "3 - Manage HP" << endl;
	// cout << "4 - Erase character" << endl;
	// cout << "5 - Quit" << endl;
	// cout << endl;

	// cin >> selector;

	// while (1) //infinite loop
	// {
	// 	switch (selector)
	// 	{
	// 	case 1:
	// 		if (created == 0)
	// 		{
	// 			cout << "Please enter the character name: ";
	// 			getline(cin, character_name);
	// 			cout << endl;
	// 			cout << "Plese choose a class for your character from the ones listed below:" << endl;
	// 			for(string classe: classes)
	// 			{
	// 				cout << classe << endl;	
	// 			}
	// 			getline(cin, character_class);

	// 		}
	// 		else
	// 		{
	// 			cout << "There is a character created already, if you want to create a new character please erase the current one first.";
	// 		}
			
	// 		break;

	// 	case 2: // see or edit character
	// 		/* code */
	// 		break;
		
	// 	case 3: // manage hp
	// 		cout << "Please, enter your current hp: ";
	// 		cin >> hp;
	// 		cout << endl;
	// 		cout << "HP atualized" << endl; 
	// 		break;
		
	// 	case 4: //erase character
	// 		if (created == 1)
	// 		{
	// 			character_name = "Not created";
	// 			character_class = "Not created";
	// 			level = 0;
	// 			for (int stat: stats)
	// 			{
	// 				stat = 0;
	// 			}
	// 			hp = 0;
	// 			max_hp = 0;
	// 			created = 0;
	// 		}
	// 		else
	// 		{
	// 			cout << "There is no character created to be erased" << endl;
	// 		}
	// 		break;		
		
	// 	case 5: //quit
	// 		quit = 1;
	// 		break;
		
	// 	default:
	// 		cout << "Sorry, please enter a valid option" << endl;
	// 		break;
	// 	}

	// 	if (quit == 1)
	// 	{
	// 		break;
	// 	}
	// }
	

// Section 10 challenge and tests (simple substitution cypher)	
	string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};	// important to remeber the spacebar
	string cypher {"fghijVWXYZpqrstuABCDEabcdeKLMNOvwxyzFGHIJklmnoPQRSTU "};

	string original_text;
	string transformed_text;

	cout << "Please write a text to be encrypted:" << endl;
	getline(cin, original_text);
	transformed_text = original_text;

	cout << endl;

	for(size_t i {0}; i < original_text.size(); i++)
	{
		transformed_text[i] = cypher[alphabet.find(original_text[i])];
	}

	cout << original_text << endl;
	cout << transformed_text << endl;

	for(size_t i {0}; i < original_text.size(); i++)
	{
		transformed_text[i] = alphabet[cypher.find(transformed_text[i])];
	}

	cout << transformed_text << endl;

	cout << transformed_text.compare(original_text);
}