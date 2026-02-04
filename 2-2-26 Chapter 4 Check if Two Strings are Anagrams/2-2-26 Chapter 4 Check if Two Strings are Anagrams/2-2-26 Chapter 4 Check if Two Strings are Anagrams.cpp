// 2-2-26 Chapter 4 Check if Two Strings are Anagrams
#include <iostream>
using namespace std;

void check_if_anagram(char first_text[100], char second_text[100]);

int main()
{
	char first_text[100];
	char second_text[100];

	cout << "Enter Two Sentences: ";
	cin.getline(first_text, 100);
	cin.getline(second_text, 100);

	check_if_anagram(first_text, second_text);
}

void check_if_anagram(char first_text[100], char second_text[100])
{
	int first_count[26] = { 0 };
	int second_count[26] = { 0 };
	for (int first_index = 0; first_text[first_index] != '\0'; first_index++)
	{
		int position = first_text[first_index] - 'a';
		first_count[position]++;
		cout << first_count[position];
	}
	cout << endl;
	for (int second_index = 0; second_text[second_index] != '\0'; second_index++)
	{
		int position = second_text[second_index] - 'a';
		second_count[position]++;
		cout << second_count[position];
	}

	bool is_anagram = true;

	for (int index = 0; index < 26; index++)
	{
		if (first_count[index] != second_count[index])
		{
			is_anagram = false;
			cout << "Anagram" << endl;
		}
	}
	cout << endl;
	if (is_anagram == 1)
	{
		cout << "Anagram" << endl;
	}
	else
	{
		cout << "Not an Anagram" << endl;
	}

}

//if (first_text[first_index] == ' ')