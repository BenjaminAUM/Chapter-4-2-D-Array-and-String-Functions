// 2-4-26 Chapter 4 Longest Word in a Sentence
#include <iostream>
using namespace std;

void read_sentence(char text[100]);

int main()
{
	char text[100];

	cout << "Enter a sentence with plenty of long words: ";
	cin.getline(text, 100);

	read_sentence(text);

	return 0;
}

void read_sentence(char text[100])
{
	int longest_word_start = 0;
	int longest_word_length = 0;
	int current_word_start = 0;
	int current_word_length = 0;

	for (int index = 0; ; index++)
	{
		if (text[index] == ' ' || text[index] == '\0')
		{
			if (current_word_length > longest_word_length)
			{
				longest_word_length = current_word_length;
				longest_word_start = current_word_start;
			}
			if (text[index] == '\0')
			{
				break;
			}
			current_word_length = 0;
			current_word_start = index + 1;
		}
		else
		{
			current_word_length++;
		}
	}

	for (int index = 0; index < longest_word_length; index++)
	{
		cout << text[longest_word_start + index]; 
	}
}