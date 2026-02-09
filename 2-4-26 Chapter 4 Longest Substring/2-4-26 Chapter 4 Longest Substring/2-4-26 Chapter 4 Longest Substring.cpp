// 2-4-26 Chapter 4 Longest Substring
#include <iostream>
using namespace std;

void find_length(char text[100]);

int main()
{
	char text[100];

	cout << "Enter a substring: ";
	cin.getline(text, 100);

	find_length(text);

	return 0;
}

void find_length(char text[100])
{

	int start_index = 0;
	int end_index = 0;
	int max_length = 0;
	bool visited[256] = { false };

	while (text[end_index] != '\0')
	{
		char current_character = text[end_index];

		while (visited[current_character] == true)
		{
			char left_char = text[start_index];
			visited[left_char] = false;
			start_index++;
		}

		visited[current_character] = true;

		int current_length = end_index - start_index + 1;
		if (current_length > max_length)
		{
			max_length = current_length;
		}
		end_index++;
	}

	cout << "Longest length without repeating characters: " << max_length << endl;
}