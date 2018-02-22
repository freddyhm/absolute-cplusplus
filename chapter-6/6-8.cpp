/*
	Name: Money
	Author: Freddy Hidalgo-Monchez
	Description: Stores a monetary amount
*/

#include <iostream>
#include <string>

using namespace std;

class Money
{
public:
	
	int getDollars();
	int getCents();
	
	// precondition: dollar >= 0 
	void setDollars(int newDollars);

	// precondition: cents >= 0
	void setCents(int newCents);

	double getTotal();
private:
	double amount = 0.0;
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
	return static_cast<int>(amount);
}

int Money::getCents()
{
	return static_cast<int>(amount * 100) % 100;
}

void Money::setDollars(int newDollars)
{
	int cents = getCents();
	amount = static_cast<double>(newDollars) + (cents / 100.0);
}

void Money::setCents(int newCents)
{
	int dollars = getDollars();
	amount = static_cast<double>(dollars) + (newCents / 100);
}

double Money::getTotal()
{
	return amount;
}
