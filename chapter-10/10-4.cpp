/*
	Name: Student class
	Author: Freddy Hidalgo-Monchez
	Description: Manages a student's classes
*/

#include <string>
#include <iostream>
using namespace std;

class Student
{
private:
	string name;
	int numClasses;
	string *classList;
public:
	Student();
	void setName(string studentName);
	string getName();
	void setNumClasses(int numClasses);
	int getNumClasses();
	void setClassList(string *classList, int classListSize);
	// precondition: classListSize > 0 && classList cannot be empty
	void printClassList();
	void inputClassList();
	void reset();
	~Student();
};


int main()
{
	string name = "";
	Student student1;

	cout << "What is your name?: " << endl;
	getline(cin, name);
	student1.setName(name);
	cout << "My name is: " << student1.getName() << endl;
	student1.inputClassList();
	cout << "You are taking: " << student1.getNumClasses() << " classes:" << endl;
	student1.printClassList();
	student1.reset();
	cout << "Resetting...";
	student1.printClassList();
	student1.inputClassList();
	student1.printClassList();

	system("pause");
}

Student::Student()
{	
	classList = NULL;
	numClasses = 0;
}

int Student::getNumClasses()
{
	return numClasses;
}

void Student::setNumClasses(int numClasses)
{
	this->numClasses = numClasses;
}

void Student::setName(string studentName)
{
	name = studentName;
}

string Student::getName()
{
	return name;
}

void Student::inputClassList()
{
	int classListSize = 0;

	cout << "How many classes are you taking this semester? ";
	cin >> classListSize;
	string *classes = new string[classListSize];

	cout << "Please enter your classes:\n";
	string className = "";
	int i = 0;

	while (i < classListSize)
	{
		getline(cin, className);

		// getline will immediately get the line whether that's blank or not
		// makes sure we only get names and skip blank lines
		if (!className.empty())
		{
			classes[i] = className;
			i++;
		}	
	}

	setClassList(classes, classListSize);

	delete[]classes;
}


void Student::setClassList(string *classList, int classListSize)
{
	if (!this->classList || numClasses != classListSize) {
		setNumClasses(classListSize);
		this->classList = new string[classListSize];
	}
	
	for (int i = 0; i < classListSize; i++)
	{
		this->classList[i] = classList[i];
	}
}

void Student::printClassList()
{
	cout << "Your classes are:" << endl;

	for (int i = 0; i < numClasses; i++)
	{
		cout << classList[i] << endl;
	}
}

void Student::reset()
{
	/*	important to set classList to NULL so we can check
		for it later when initializing */

	delete[]classList;
	classList = NULL;
	numClasses = 0;
}

Student::~Student()
{
	delete[]classList;
}