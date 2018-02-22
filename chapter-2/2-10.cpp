//============================================================================
// Name        : 2.10.cpp
// Author      : Freddy Hidalgo-Monchez
// Description : reads in text and replace every occurrence of the word "hate"
//               with the word "love"
//============================================================================

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
	string text;
	string test;

	fstream inputStream;
	inputStream.open("test.txt");

	if (inputStream.is_open()) {
		while (inputStream >> text) {
			if (text == "hate") {
				cout << " love ";
			} else {
				cout << text;
			}
		}
	}

	cout << endl;
	inputStream.close();

	return 0;
}
