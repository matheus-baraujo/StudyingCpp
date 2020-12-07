#include <iostream>

#include <vector>

	using std::cout;
	using std::cin;
	using std::endl;
	using std::vector;

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

// section 6 challenge (sorry for being a Dnd addict kk)

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

// Section 7 challenge	

	vector<int> vector1;
	cout << "The size of the vector1 is " << vector1.size() << endl;
	vector<int> vector2;
	cout << "The size of the vector2 is " << vector2.size() << endl;
	
	vector1.push_back(10);
	cout << "The size of the vector1 is " << vector1.size() << endl;
	cout << "Element added: " << vector1.at(0) << endl;
	vector1.push_back(20);
	cout << "The size of the vector1 is " << vector1.size() << endl;
	cout << "Element added: " << vector1.at(1) << endl;
	cout << "Elements:" << endl;
	for (int i = 0; i <= vector1.size() - 1; i++)
	{
		cout << vector1.at(i) << " ";
	}
	cout << endl;
	
	vector2.push_back(100);
	cout << "The size of the vector2 is " << vector2.size() << endl;
	cout << "Element added: " << vector2.at(0) << endl;
	vector2.push_back(200);
	cout << "The size of the vector2 is " << vector2.size() << endl;
	cout << "Element added: " << vector2.at(1) << endl;
	cout << "Elements:" << endl;
	for ( int i = 0; i <= vector2.size() - 1; i++)
	{
		cout << vector2.at(i) << " ";
	}
	cout << endl;

	vector <vector<int>> vector2d;
	vector2d.push_back(vector1);
	vector2d.push_back(vector2);
	cout << "Elements of vector2d:" << endl;
	for (int i = 0; i <= vector1.size()-1; i++)
	{
		for (int j = 0; j <= vector2.size()-1; j++)
		{
			cout << vector2d.at(i).at(j) << " ";
		}
		cout << endl;
	}
}