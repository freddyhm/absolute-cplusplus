//============================================================================
// Name        : 3-1.cpp
// Author      : Freddy Hidalgo-Monchez
// Description : Determines the number of miles per gallon a car can deliver
//============================================================================

#include <iostream>

using namespace std;

const double LITER_TO_GALLON = 0.264179;

double milesPerGallon(double liters, double miles);

int main()
{
	double liters = 0.0;
	double miles = 0.0;
	char restart = 'N';

	do
	{
		// input number of liters of gasoline consumed by car
		cout << "Please enter the number of liters of gasoline you've consumed: ";
		cin >> liters;

		// input number of miles traveled by the car
		cout << "Please enter the the number of miles traveled: ";
		cin >> miles;

		// output the number of miles per gallon (MPG) delivered
		cout.precision(2);
		cout << "Your car's miles per gallon (MPG) is: " << milesPerGallon(liters, miles) << endl;
		system("pause");

		cout << "Restart calculation? (Y/N): ";
		cin >> restart;
	} while (restart == 'Y' || restart == 'y');

	return 0;
}

double milesPerGallon(double liters, double miles) 
{
	// Convert liters into gallons
	double gallons = liters * LITER_TO_GALLON;
	
	return miles / gallons;
}