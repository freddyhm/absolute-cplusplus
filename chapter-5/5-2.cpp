/*
	Name        : 5-2.cpp
	Author      : Freddy Hidalgo-Monchez
	Description : Delete all repeated letters from a partially filled array
	Requirements: - The function must have two parameters: an array parameter
					and an int parameter giving the number of array positions used
				  - Second parameter will be a call-by-reference and will be changed
					to show how much of the array is used after the repeated letters
					are deleted.
				  - Embed function in a suitable test program 
*/

#include <iostream>

using namespace std;

void deleteRepeats(char arr[], int &size);
void printArr(char arr[], int &size);

int main()
{
	// initialize array with duplicates at the beginning
	char arrBeg[] = { 'a', 'a', 'b', 'c', 'd', 'e' };
	
	// initialize array with duplicates at the end
	char arrEnd[] = { 'a', 'b', 'c', 'd', 'e', 'e' };

	// initialize array with duplicates in the middle
	char arrMid[] = { 'a', 'b', 'c', 'c', 'd', 'e' };

	int sizeBeg = sizeof(arrBeg) / sizeof(arrBeg[0]);
	int sizeEnd = sizeof(arrEnd) / sizeof(arrEnd[0]);
	int sizeMid = sizeof(arrMid) / sizeof(arrMid[0]);

	// print before and after changes
	printArr(arrBeg, sizeBeg);
	deleteRepeats(arrBeg, sizeBeg);
	cout << "Array beg mod:" << endl;
	printArr(arrBeg, sizeBeg);

	printArr(arrEnd, sizeEnd);
	deleteRepeats(arrEnd, sizeEnd);
	cout << "Array end mod:" << endl;
	printArr(arrEnd, sizeEnd);

	printArr(arrMid, sizeMid);
	deleteRepeats(arrMid, sizeMid);
	cout << "Array mid mod:" << endl;
	printArr(arrMid, sizeMid);

	system("pause");

	return 0;
}

/*
Precondition:  arr is an array that contains duplicates and size > 0
Postcondition: arr array will only hold unique characters and will have no gaps.
			   Size will also be updated to reflect the new array size.
*/
void deleteRepeats(char arr[], int &size)
{
	// loop through array
	for (int i = 0; i < size; i++)
	{
		// for every index of main array
		// look at next element
		for (int j = i + 1; j < size; j++)
		{
			// if you find the same element
			if (arr[i] == arr[j])
			{
				// starting at the duplicate index
				// set the duplicate index to be the next element
				// so we remove the duplicate
				for (int k = j; k < size; k++)
				{
					arr[k] = arr[k + 1];
				}

				// decrease size since we removed a duplicate
				size--;
			}
		}
	}
}



/*
Precondition:  arr is an array with size > 0
Postcondition: arr will be printed on to the terminal
*/
void printArr(char arr[], int &size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' '; 
	}

	cout << endl;
}
