//============================================================================
// Name			: 4-1.cpp
// Author		: Freddy Hidalgo-Monchez
// Description	: Converts 24-hour notation to 12-hour notation
//============================================================================

#include <iostream>
#include <string>

using namespace std;

void input(int& hours24, int& minutes);
void convert(int& hours, char& AMPM);
void output(int hours, int minutes, char AMPM);

int main()
{
	int hours, minutes = 0;
	char AMPM = 'A';
	char answer = 'N';

	do
	{
		input(hours, minutes);
		convert(hours, AMPM);
		output(hours, minutes, AMPM);
 
		cout << "Would you like to convert time again? (Y/N): ";
		cin >> answer;

	} while(answer == 'Y' || answer == 'y');

	return 0;
}

/*	Precondition:	input(hours, minutes) is called with
					arguments capable of being assigned.

	Postcondition:	User is prompted for time in 24-hour format:
					HH:MM, where 0 <= HH < 24, 0 <= MM < 60.
					hours is set to HH, minutes is set to MM.
*/
void input(int& hours24, int& minutes)
{
	char colon = ':';
	cout << "Please enter your 24hr formatted hour:" << endl;
	cin >> hours24 >> colon >> minutes;
}

/*
Precondition: 0 <= hours < 24

Postcondition :	if hours > 12,
					hours is replaced by hours - 12 
					AMPM is set to 'P'
				else if 12 == hours 
					AMPM is set to 'P', // hours is not changed.
				else if 0 == hours // boundary morning hour
					hours = hours + 12;
				AMPM = 'A';
					else (hours < 12)
					AMPM is set to 'A';
					hours is unchanged
*/
void convert(int& hours, char& AMPM)
{
	if (hours > 12) // definitely in the afernoon
	{
		hours = hours - 12;
		AMPM = 'P';
	}
	else if (12 == hours) // boundary afternoon hour
	{
		AMPM = 'P';
	}
	else if (0 == hours)
	{
		hours = hours + 12;
		AMPM = 'A';
	}
	else // (hours < 12)  morning hour
	{
		AMPM = 'A';
	}
}

/*
	Precondition: 0 < hours <= 12, 0 <= minutes < 60,
				  AMPM == 'P' or AMPM == 'A'

	Postconditions: time is written in the format
					HH:MM AM or HH:MM PM
*/
void output(int hours, int minutes, char AMPM)
{
	cout << "Time in 12-hour format: " << endl
		 << hours << ":" << minutes << " " << AMPM << 'M' << endl;
}





