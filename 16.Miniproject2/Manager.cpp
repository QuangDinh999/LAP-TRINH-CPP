#include "Manager.h"

Manager::Manager()
	:Employee{}
{
}

Manager::Manager(int id, string name)
	:Employee{id, name}
{
}

void Manager::show()
{
	
	Employee::show();
	cout << "I am manager, i have "<< m_yoe << " years of experience" << endl;
}

void Manager::input()
{
	cout << "I am manager! " << endl;
	Employee::input();
	
	cout << "Enter your yoe: ";
	cin >> m_yoe;
	
}
