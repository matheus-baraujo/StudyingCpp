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
    // Section 8 challenge (DnD money exchanger)
	
	//test
	cout << "Type the value and type of coin you want to exchange: ";
	
	int value {0};
	char coin [10];

	int platinum {0};
	int gold {0};
	int silver {0};
	int copper {0};

	cin >> value;
	cin >> coin;

	cout << endl << value << " " << coin << endl;

	// 1 platinum == 10 gold
	// 1 gold == 10 silver
	// 1 silver == 10 copper

	if (coin != "platinum" && coin != "gold" && coin != "silver" && coin != "copper")
	{
		cout << "Coin not recognized, unfortunately we cant help." << endl;
	}
	else 
	{
		if (coin == "platinum")
		{
			gold = value*10;	
		}
		else if (coin == "gold")
		{
			if (value > 10)
			{
				platinum = value/10;
				gold = value%10;	
			}
			else
			{
				silver = value*10;
			} 
		}
		else if (coin == "silver")
		{
			if (value > 10)
			{
				gold = value/10;
				silver = value%10;
			}
			else
			{
				copper = value*10;
			}
		}
		else if (coin == "copper")
		{
			if (value > 10)
			{
				silver = value/10;
				copper = value%10; 
			}
			else
			{
				copper = value;
			}
		}
		
		cout << "Here is your exchanged money:" << endl;
		cout << "Platinum: " << platinum << endl;
		cout << "Gold: " << gold << endl;
		cout << "Silver: " << silver << endl;
		cout << "Copper: " << copper << endl;
	}	
}    