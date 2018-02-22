/*
	Name: HotDogStand 
	Author: Freddy Hidalgo-Monchez
	Description: Manages hot dog stands and their activities  
*/

class HotDogStand
{
public:
	
	HotDogStand();
	
	// precondition: idNum > 0 and hotDogSold >=0
	// postcondition: hot dog stand's id and the number of dogs sold are set according to arguments
	HotDogStand(int idNum, int hotDogSold);

	// postcondition: increments the number of hot dogs sold by one
	void justSold();

	// postcondition: returns number of hot dogs sold
	int getDogSold();

	// postcondition: returns number of hot dogs sold in all stands
	static int getDogSoldAllStands();

private:
	int id = 0;
	int dogSold = 0;
	static int dogSoldAllStands;
};

int HotDogStand::dogSoldAllStands = 0;

#include <iostream>

using namespace std;

int main()
{	
	// initialize with ID and number of hot dog sold 
	HotDogStand mainSt(1, 10);
	HotDogStand broadwaySt(2, 0);
	HotDogStand commercialDr(3, 5);

	cout << "Start of the day:" << endl;
	cout << "Main st sold: " << mainSt.getDogSold() << endl;
	cout << "Broadway st sold: " << broadwaySt.getDogSold() << endl;
	cout << "Commercial st sold: " << commercialDr.getDogSold() << endl;

	cout << "Total sold: " << HotDogStand::getDogSoldAllStands() << endl;

	mainSt.justSold();
	broadwaySt.justSold();
	commercialDr.justSold();

	mainSt.justSold();
	commercialDr.justSold();

	cout << "End of the day:" << endl;
	cout << "Main st sold: " << mainSt.getDogSold() << endl;
	cout << "Broadway st sold: " << broadwaySt.getDogSold() << endl;
	cout << "Commercial st sold: " << commercialDr.getDogSold() << endl;

	cout << "Total sold: " << HotDogStand::getDogSoldAllStands() << endl;

	system("pause");
}

HotDogStand::HotDogStand()
{
	id = 0;
	dogSold = 0;
}

HotDogStand::HotDogStand(int idNum, int hotDogSold)
{
	id = idNum;
	dogSold = hotDogSold;
	dogSoldAllStands += hotDogSold;
}

void HotDogStand::justSold()
{
	dogSold++;
	dogSoldAllStands++;
}

int HotDogStand::getDogSold()
{
	return dogSold;
}


int HotDogStand::getDogSoldAllStands()
{
	return dogSoldAllStands;
}
