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
    // Section 7 challenge (create and manipulate 3 vectors)	

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