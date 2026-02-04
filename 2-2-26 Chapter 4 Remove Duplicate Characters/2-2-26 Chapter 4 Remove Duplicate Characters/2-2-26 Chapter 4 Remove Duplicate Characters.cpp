// 2-2-26 Chapter 4 Remove Duplicate Characters
#include <iostream>
using namespace std;

void remove_duplicates(char word[100],char unique_character[100]);

int main()
{
	char word[100];
	char unique_character[100];

	cout << "Enter a Word: ";
	cin.getline(word, 100);

	remove_duplicates(word, unique_character);

	return 0;
}

void remove_duplicates(char word[100], char unique_character[100])
{
	int unique_index = 0;

	for (int index = 0; word[index] != '\0'; index++)
	{
		bool is_already_present = false;
		for (int check_index = 0; check_index < unique_index; check_index++)
		{
			if (word[index] == unique_character[check_index])
			{
				is_already_present = true;
				break;
			}
		}
		if (!is_already_present)
		{
			unique_character[unique_index] = word[index];
			unique_index++;
		}
	}

	unique_character[unique_index] = '\0';
	cout << unique_character << endl;
}