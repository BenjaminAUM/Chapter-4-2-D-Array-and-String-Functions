// 2-4-26 Chapter 4 Pattern Analyzer
#include <iostream>
using namespace std;

void analyze_pattern(char first_text[100], char second_text[100]);

int main()
{
	char first_text[100];
	char second_text[100];
	cout << "Enter  A sentence: ";
	cin.getline(first_text, 100);
	cout << "Enter A pattern linked to the sentence: ";
	cin.getline(second_text, 100);

	analyze_pattern(first_text, second_text);


	return 0;
}

void analyze_pattern(char first_text[100], char second_text[100])
{
	int text_length = 0;
	int found_start_index = -1;

	while (first_text[text_length] != '\0')
	{
		text_length++;
	}
	cout << "text length: " << text_length << endl;

	int search_pattern = 0;

	while (second_text[search_pattern] != '\0')
	{
		search_pattern++;
	}
	cout << "Pattern length: " << search_pattern << endl;

	for (int index = 0; index <= text_length - search_pattern; index++)
	{
		bool is_pattern = true;
		for (int pattern_index = 0; pattern_index < search_pattern; pattern_index++)
		{
			if (first_text[index + pattern_index] != second_text[pattern_index])
			{
				is_pattern = false;
				break;
			}

			if (is_pattern == 1)
			{
				found_start_index = index;
			}
		}

	}
	cout << found_start_index << endl;

}