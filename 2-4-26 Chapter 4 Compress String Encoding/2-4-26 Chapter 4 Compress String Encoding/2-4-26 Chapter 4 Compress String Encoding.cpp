// 2-4-26 Chapter 4 Compress String Encoding
#include <iostream>
using namespace std;

void read_and_compress_string(char text[100]);

int main()
{
	char text[100];

	cout << "Enter a Word: ";
	cin.getline(text, 100);

	read_and_compress_string(text);

	return 0;
}

void read_and_compress_string(char text[100])
{

	for (int index = 0; text[index] != '\0'; )
	{
		char current_word = text[index];
		int repeat_word = 0;

		while (text[index] == current_word)
		{
			repeat_word++;
			index++;
		}

		cout << current_word << repeat_word << endl;

	}

}

