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
    // section 6 challenge (create a simple function that calculates the cost of a service, sorry for being a Dnd addict kk)

	const int smallRoomCharge {25};
	const int bigRoomCharge {35};
	const float tax {0.06};

	int numberSmallRoom {0};
	int numberBigRoom {0};
	int totalCost {0};

	std::cout << "Hello!! Welcome to Whitestone Glamourous Tavern" << std::endl;
	
	std::cout << "How many small rooms would you like to rent?" << std::endl;
	std::cin >> numberSmallRoom;

	std::cout << "How many big rooms would you like to rent?" << std::endl;
	std::cin >> numberBigRoom;

	totalCost = (25*numberSmallRoom)+(35*numberBigRoom);

	std::cout << "This would cost you " << totalCost << " gold pieces." << std::endl;
	std::cout << "With a tax of: " << totalCost*tax << " gold pieces." << std::endl;

	std::cout << "This estimate is valid for 30 days" << std::endl;

	std::vector <char> test;

}    