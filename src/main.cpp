#include <iostream>

int main(int argc, char *argv[])
{
/*	
	int valor {0};
	char texto[90];
	std::cout << "Hello world!" << std::endl;
	std::cout << "write a number please" << std::endl;
	std::cin >> valor;

	if (valor == 35)
	{
		std::cout << valor << std::endl;
		std::cout << "ok, i already understood" << std::endl;
		std::cout << "Please write a phrase" << std::endl;
		std::cin >> texto;
		std::cout << texto << std::endl;
	}
	else
	{
		std::cout << valor << std::endl;
	std::cout << "Im starting to understand" << std::endl;	
	}
*/
	const int smallRoomCharge {25};
	const int bigRoomCharge {35};
	const float tax {0.06};

	int numberSmallRoom {0};
	int numberBigRoom {0};
	int totalCost {0};

// sorry for being a Dnd addict kk

	std::cout << "Hello!! Welcome to Whitestone Glamourous Tavern" << std::endl;
	
	std::cout << "How many small rooms would you like to rent?" << std::endl;
	std::cin >> numberSmallRoom;

	std::cout << "How many big rooms would you like to rent?" << std::endl;
	std::cin >> numberBigRoom;

	totalCost = (25*numberSmallRoom)+(35*numberBigRoom);

	std::cout << "This would cost you " << totalCost << " gold pieces." << std::endl;
	std::cout << "With a tax of: " << totalCost*tax << " gold pieces." << std::endl;

	std::cout << "This estimate is valid for 30 days" << std::endl;

}