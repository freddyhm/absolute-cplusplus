/*
	Name: Money
	Author: Freddy Hidalgo-Monchez
	Description: Stores a monetary amount
	Requirements:	- Must be a class
					- Two private integer variables: 
					  one to store the number of dollars 
					  and another to store the number of cents
					- Accessor and mutator functions
					- Function that returns monetary amount as 
					  a double
					- Test with at least two different Money objects
*/


#include <iostream>
#include <string>

using namespace std;

class Money
{
public:

	// postcondition: dollar amount is returned
	int getDollars();

	// postcondition: cents amont is returned
	int getCents();

	// precondition: dollar >= 0 
	// postcondition: the dollar amount is set according to argument
	void setDollars(int newDollars);

	// precondition: cents >= 0
	// postcondition: the cents amount is set according to argument
	void setCents(int newCents);

	// postcondition: the total amount of money is returned
	double getTotal();
private:
	int dollars;
	int cents;
};

int main()
{
	Money cashA;
	cashA.setDollars(10);
	cashA.setCents(23);

	cout << cashA.getDollars() << endl;
	cout << cashA.getCents() << endl;
	cout << cashA.getTotal() << endl;


	Money cashB;
	cashB.setDollars(1);
	cashB.setCents(2);

	cout << cashB.getDollars() << endl;
	cout << cashB.getCents() << endl;
	cout << cashB.getTotal() << endl;

	system("pause");
}

int Money::getDollars()
{
	return dollars;
}

int Money::getCents()
{
	return cents;
}

void Money::setDollars(int newDollars)
{
	dollars = newDollars;
}

void Money::setCents(int newCents)
{
	cents = newCents;
}

double Money::getTotal()
{
	return static_cast<double>(dollars) + static_cast<double>(cents) / 100;
}
