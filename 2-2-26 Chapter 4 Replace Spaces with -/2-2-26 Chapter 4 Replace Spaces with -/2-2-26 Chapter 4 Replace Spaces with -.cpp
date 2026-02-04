// 2-2-26 Chapter 4 Replace Spaces with -
#include <iostream>
using namespace std;

void replace_spaces(char text[100]);

int main()
{
	char text[100];

	cout << "Enter a Sentence: ";
	cin.getline(text, 100);

	replace_spaces(text);
	
	return 0;
}

void replace_spaces(char text[100])
{
	for (int index = 0; text[index] != '\0'; index++)
	{
		if (text[index] == ' ')
		{
			text[index] = '-';
		}
	}

	cout << text << endl;
}