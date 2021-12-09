#include "Tester.h"


Tester::Tester()
	: Employee{}
{
}

Tester::Tester(int id, string name)
	: Employee{id, name}
{
}

void Tester::show()
{
	Employee::show();
	cout << "I am tester, i test software programs..." << endl;
}

void Tester::input()
{
	cout << "I am Tester! " << endl;
	Employee::input();
	cout << "Enter your category: ";
	getline(cin, m_category);
}
