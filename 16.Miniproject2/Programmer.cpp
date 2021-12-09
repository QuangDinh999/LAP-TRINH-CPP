#include "Programmer.h"

void Programmer::show()
{
	Employee::show();
	cout << "I write code: "<< endl;;
	

}

void Programmer::input()
{
	cout << "I am Programmer!" << endl;
	Employee::input();
	cout << "Enter programming language: ";
	getline(cin, m_programminglanguage);
}
