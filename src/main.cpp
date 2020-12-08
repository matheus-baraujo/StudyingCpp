#include <iostream>

#include <vector>

	using std::cout;
	using std::cin;
	using std::endl;
	using std::vector;

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
}