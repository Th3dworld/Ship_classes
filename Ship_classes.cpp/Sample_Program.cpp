#include <iostream>
#include<string>
#include "CargoShip.h"
#include "Cruiseship.h"
#include "Ship.h"
using namespace std;

/*
* This sample program will show polymorphism at work. An array of base class pointers will be used to dynamically initialize derived class pointers
* 
* Matanda Hillary Phiri
*/

int main()
{
	//Create array and store data
	Ship* arrs[3];
	string name, inp2;
	int inp3;
	
	
	//Get informantion from user
	cout << "Please input the following data:\n";
	for(int i = 0 ; i < 3; i++)
	{
		if(i == 0)
		{
			cout << i + 1 << ". Ship name: ";
			getline(cin, name);
			cout << i + 2 << ". Year ship was made: ";
			getline(cin, inp2);
			arrs[i] = new Ship(name, inp2);
		}
		if (i == 1)
		{
			cout << i + 2 << ". Ship Maximum capacity: ";
			cin >> inp3;
			arrs[i] = new Cruiseship(name, inp3);
		}
		if (i == 2)
		{
			cout << i + 2 << ". Ship Maximum Tonnage: ";
			cin >> inp3;
			arrs[i] = new CargoShip(name, inp3);
		}
	}

	cout << "Display informations\n";
	cout << "=====================\n\n\n";
	cout << "Generic Ship Data\n";
	cout << "=================\n";
	arrs[0]->print();
	cout << "\n\n";

	cout << "Cruise Ship Data\n";
	cout << "================\n";
	arrs[1]->print();
	cout << "\n\n";

	cout << "Cargo Ship Data\n";
	cout << "===============\n";
	arrs[2]->print();

	cout << "\n\n\n";

	return 0;
}