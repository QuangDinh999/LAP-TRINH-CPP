#include "Employee.h"


void Employee::show()
{
	cout << m_id << " " << m_name << " " << m_email << endl;
}

void Employee::input()
{
	cout << "Enter id: ";
	cin >> m_id;

	cin.ignore(100, '\n');

	cout << "Enter name: ";
	getline(cin, m_name);
	
	

	cout << "Enter email: ";
	getline(cin, m_email);
	
}
