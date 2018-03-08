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
	string classList[3];
public:
	void Student::setClassList(string classList[], int classListSize);
	// precondition: classListSize > 0 && classList cannot be empty

	void Student::printClassList();
	void Student::inputClassList();
};

int main()
{
	Student student1;
	student1.inputClassList();
	student1.printClassList();

	system("pause");
}

void Student::inputClassList()
{
	int classListSize = 0;

	cout << "How many classes are you taking this semester? ";
	cin >> classListSize;
	string *classes = new string[classListSize];

	string className = "";
	int i = 0;

	while (className.empty())
	{
		getline(cin, className);
		classes[i] = className;
		i++;
	}


	/*

	for (int i = 0; i < classListSize; i++)
	{
		getline(cin, classes[i]);
	} */

	setClassList(classes, classListSize);

	delete[]classes;
}


void Student::setClassList(string classes[], int classListSize)
{
	for (int i = 0; i < classListSize; i++)
	{
		classList[i] = classes[i];
	}
}

void Student::printClassList()
{
	int size = (sizeof(classList)  / sizeof(classList[0]));

	cout << "Your classes are:" << endl;

	for (int i = 0; i < size; i++)
	{
		cout << classList[i] << endl;
	}
}