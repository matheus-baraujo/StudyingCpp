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
    //Testing some Cpp sintax and getting used to it

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

}    