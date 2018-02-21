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
#include <cctype>

using namespace std;

/*	precondition: args are strings that may contain punctuation, spaces, and 
				 a mix of upper and lower case
	postcondition: returns true if both strings contain the same letters */
bool isAnagram(string firstWord, string secondWord);

/*	precondition: args are an empty array and a string that may contain punctuation, 
				  spaces, and a mix of upper and lower case
	postcondition: builds a histogram with an array containing the frequency of characters  */
void buildHistogram(int letterFreq[], string s);

/*	precondition: two non-empty arrays and sizeHistogram > 0
	postcondition: returs true if both arrays have the same values and in the same order  */
bool areHistogramEqual(int letterCount1[], int letterCount2[], int sizeHistogram);

int main()
{
	string firstWord;
	string secondWord;

	cout << "Enter two strings" << endl;
	getline(cin, firstWord);
	getline(cin, secondWord);

	if (isAnagram(firstWord, secondWord))
	{
		cout << firstWord + " and " + secondWord + " are anagramas!" << endl;
	}
	else
	{
		cout << firstWord + " and " + secondWord + " are not anagramas!" << endl;
	}

	system("pause");

	return 0;
}

bool isAnagram(string firstWord, string secondWord)
{
	const int ALPHA_SIZE = 26;
	int firstHistogram[26] = {};
	int secondHistogram[26] = {};
	
	buildHistogram(firstHistogram, firstWord);
	buildHistogram(secondHistogram, secondWord);

	return areHistogramEqual(firstHistogram, secondHistogram, ALPHA_SIZE);
}

bool areHistogramEqual(int letterCount1[], int letterCount2[], int sizeHistogram)
{
	bool result = true;

	for (int i = 0; i < sizeHistogram; i++)
	{
		if (letterCount1[i] != letterCount2[i])
		{
			result = false;
		}
	}

	return result;
}

void buildHistogram(int letterCount[], string word)
{
	int numLetter = 0;

	// add letter's number equivalent to histogram 
	for (int i = 0; i < word.length(); i++)
	{
		if (isalpha(word[i]))
		{
			char letter = tolower(word[i]); 
			numLetter = static_cast<int>(letter) - 97; // sets a = 0
			letterCount[numLetter]++;
		}
	}
}

