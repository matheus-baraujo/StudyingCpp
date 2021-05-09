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

//section 10 challenge assignment (create a letter pyramid with a given string of letters)

//		  A						String: ABCDE	
//		 ABA				
//		ABCBA					
//	   ABCDCBA		
//    ABCDEDCBA	

	string letters{};

    cout << "Enter a string of letters so I can create a Letter Pyramid from it: ";
    getline(cin, letters);

    size_t num_letters = letters.length();

    int position {0};

    // for each letter in the string
    for (char c: letters) {

        size_t num_spaces = num_letters - position;
        while (num_spaces > 0) {
            cout << " ";
            --num_spaces;
        }

        // Display in order up to the current character
        for (size_t j=0; j < position; j++) {
            cout << letters.at(j);
        }

        // Display the current 'center' character
        cout << c;

        // Display the remaining characters in reverse order
        for (int j=position-1; j >=0; --j) {
			cout << letters.at(j);
        }

        cout << endl; // Ending the line
        ++position;
    }
	return 0;
}    