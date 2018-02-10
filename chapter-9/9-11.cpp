/*
	Name: Anagrams
	Author: Freddy Hidalgo-Monchez
	Description: Checks if two strings are anagrams
	Requirements: 	- Must be a function
					- Cannot be case-sensitive
					- Disregard punctuations or spaces
					- Anagrams: two strings that have the same
					  letters. They can be rearranged to form
					  each other
*/

#include <iostream>
#include <string>

using namespace std;

/*	precondition: args are strings that may contain punctuation, spaces, and 
				 a mix of upper and lower case
	postcondition: returns true if both strings contain the same letters */
bool isAnagram(string firstWord, string secondWord);

int main()
{
	string firstWord = "Eleven plus two";
	string secondWord = "Twelve plus two";

	cout << isAnagram(firstWord, secondWord) << endl;

	system("pause");

	return 0;
}

bool isAnagram(string firstWord, string secondWord)
{


	return true;
}