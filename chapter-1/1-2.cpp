//============================================================================
// Name        : 1.2.cpp
// Author      : Freddy Hidalgo-Monchez
// Description : Calculates how much soda a human can drink before dying
//============================================================================

#include <iostream>
using namespace std;

int main()
{

	double lethalSweetAmtMouse = 0.0;
	double mouseWeight = 0.0;
	double dieterWeight = 0.0;
	const double sweetSingleCan = 0.001; // percentage of sweetener in a single can
	int numOfSodaCans = 0;
	double lethalHumanAmt = 0.0;

	cout << "please enter the amount of sweetener that is lethal for a mouse (kg):";
	cin >> lethalSweetAmtMouse;
	cout << "weight of the mouse (kg):";
	cin >> mouseWeight;
	cout << "weight the dieter wants to achieve (kg):";
	cin >> dieterWeight;

	// find the lethal amount for humans based on lethal sweetener-to-weight ratio of a mouse
	lethalHumanAmt = (lethalSweetAmtMouse / mouseWeight) * dieterWeight;
	numOfSodaCans = (lethalHumanAmt / sweetSingleCan);

	cout << "The amount of cans that it would take to kill the dieter is " << numOfSodaCans;

	return 0;
}

