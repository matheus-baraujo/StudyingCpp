#include <iostream>

int main(int argc, char *argv[])
{
	int valor;
	std::cout << "Hello world!" << std::endl;
	std::cout << "write a number please" << std::endl;
	std::cin >> valor;

	if (valor == 35)
	{
		std::cout << valor << std::endl;
		std::cout << "ok, i already understood" << std::endl;
	}
	else
	{
		std::cout << valor << std::endl;
	std::cout << "Im starting to understand" << std::endl;	
	}
	
}