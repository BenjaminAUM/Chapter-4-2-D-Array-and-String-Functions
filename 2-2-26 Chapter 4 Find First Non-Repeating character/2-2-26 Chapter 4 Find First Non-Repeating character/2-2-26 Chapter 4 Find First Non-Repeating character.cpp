// 2-2-26 Chapter 4 Find First Non-Repeating character
#include <iostream>
using namespace std;

void find_first_non_repeating(char text[100], char first_unique_character);

int main()
{
	char text[100];
	char first_unique_character = '\0';

	cout << "Enter a sentence: ";
	cin.getline(text, 100);

	find_first_non_repeating(text, first_unique_character);

	return 0;
}

void find_first_non_repeating(char text[100], char first_unique_character)
{
	for (int index = 0; text[index] != '\0'; index++)
	{
		int character_count = 0;
		for (int scan_index = 0; text[scan_index] != '\0'; scan_index++)
		{
			if (text[index] == text[scan_index])
			{
				character_count++;
			}
		}
		if (character_count == 1)
		{
			first_unique_character = text[index];
			break;
		}
	}

	if (first_unique_character == '\0')
	{
		cout << "None" << endl;
	}
	else
	{
		cout << first_unique_character << endl;
	}
}