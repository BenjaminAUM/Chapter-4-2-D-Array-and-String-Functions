// 2-2-26 Chapter 4 Check Palindrom
#include <iostream>
using namespace std;

void read_user_word(char word[100]);

int main()
{
	char word[100];
	cout << "Enter a Word: ";
	cin >> word;

	read_user_word(word);

	return 0;
}

void read_user_word(char word[100])
{
	int length = 0;

	while (word[length] != '\0')
	{
		length++;
	}
	int left_index = 0;
	int right_index = length - 1;
	bool is_palindrome = true;

	while (left_index < right_index)
	{
		if (word[left_index] != word[right_index])
		{
			is_palindrome = false;
			break;
		}
		left_index++;
		right_index--;
	}

	if (is_palindrome == false)
	{
		cout << "Not a Palindrome" << endl;
	}
	else
	{
		cout << "Palindrome" << endl;
	}
}