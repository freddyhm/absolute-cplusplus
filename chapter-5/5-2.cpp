/*
	Name        : 5-2.cpp
	Author      : Freddy Hidalgo-Monchez
	Description : Delete all repeated letters from a partially filled array
*/

#include <iostream>

using namespace std;

/*
Precondition:  arr contains duplicates and size > 0
Postcondition: arr array will only hold unique characters and will have no gaps.
Size will also be updated to reflect the new array size.
*/
void deleteRepeats(char arr[], int &size);

/*
Precondition:  arr size > 0
*/
void printArr(char arr[], int &size);

int main()
{
	// array with duplicates at the beginning
	char arrBeg[] = { 'a', 'a', 'b', 'c', 'd', 'e' };
	
	// array with duplicates at the end
	char arrEnd[] = { 'a', 'b', 'c', 'd', 'e', 'e' };

	// array with duplicates in the middle
	char arrMid[] = { 'a', 'b', 'c', 'c', 'd', 'e' };

	int sizeBeg = sizeof(arrBeg) / sizeof(arrBeg[0]);
	int sizeEnd = sizeof(arrEnd) / sizeof(arrEnd[0]);
	int sizeMid = sizeof(arrMid) / sizeof(arrMid[0]);

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


void deleteRepeats(char arr[], int &size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				// starting at the duplicate index
				// set the duplicate index to be the next element
				// so we remove the duplicate
				for (int k = j; k < size; k++)
				{
					arr[k] = arr[k + 1];
				}

				size--;
			}
		}
	}
}


void printArr(char arr[], int &size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' '; 
	}

	cout << endl;
}
