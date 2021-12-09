

#include <iostream>
#include <vector>
#include <fstream>

#include"Employee.h"
#include "Programmer.h"
#include "Tester.h"
#include "Manager.h"
#include "Utils.h"
void showMenu() {
    cout << "------------------------------Menu--------------------" << endl;
    cout << "1. Add employee" << endl;
    cout << "2. Edit employee" << endl;
    cout << "3. Remove employee" << endl;
    cout << "4. Sort employee by name" << endl;
    cout << "5. Show all employees" << endl;
    cout << "0. Exit" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "Please choose: ";
}

void showAll(vector<Employee*> list) {
    for (auto e : list) {
       e->show();
   }
}
int main()
{
   /* Employee* e{ new Employee() };
   
    e->input();

    e->show();*/

    /*Employee* p{ new Programmer() };
    Employee* t{ new Tester() };
    Employee* m{ new Manager() };
    p->input();
    p->show();
    t->input();
    t->show();
    m->input();
    m->show();*/

   /* vector<int> numbers{ 1, 2, 3 };
    cout << numbers[0] << endl;
    cout << numbers.at(1) << endl;

    numbers.push_back(4);
    cout << numbers.at(3);*/

    /*vector<Employee*> list{};*/



    /*list.push_back(p);
    list.push_back(t);
    list.push_back(m);
    */
    /*for (int i{ 0 }; i < list.size(); ++i) {
        list.at(i)->input();
    }
    
    for (auto e : list) {
        e->show();
    }*/



    vector<Employee*> list{};

    ifstream filein{ "input.txt" };

    // doc du lieu tu file
    string line;
    while (getline(filein, line)) {
        auto vec = Utils::split(line, ",");

        if (vec.at(0) == "1") {
            list.push_back(new Programmer{ stoi(vec.at(1)), vec.at(2) });
        }
        else if (vec.at(0) == "2"){
            list.push_back(new Tester{ stoi(vec.at(1)), vec.at(2) });
        }
        else if (vec.at(0) == "3") {
            list.push_back(new Manager{ stoi(vec.at(1)), vec.at(2) });
        }
    }


    

   /*for (auto e : list) {
       e->show();
   }*/

   int choose;
   bool exit{ false };

   showMenu();

   while (true) {
       cin >> choose;
       switch (choose)
       {
       case 1:
           cout << "Add employee" << endl;
           break;
       case 2:
           cout << "Edit employee" << endl;
           break;
       case 3:
           cout << "Remove employee" << endl;
           break;
       case 4:
           cout << "Sort by name" << endl;
           break;
       case 5:
           cout << "Show all employee" << endl;
           showAll(list);
           break;
       case 0:
           cout << "Exit" << endl;
           exit = true;
           break;
       }
       if (exit) {
           break;
       }
       showMenu();
   }





}

