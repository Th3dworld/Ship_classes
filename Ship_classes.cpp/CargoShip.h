///This is the specification fiile the CARGOSHIP class
//This is class will be derived from the Ship class
#ifndef CARGOSHIP_H
#define CARGOSHIP_H
#include "Ship.h"

class CargoShip : public Ship
{
	//Declare Private attributes
private:
	int tonnage;

	//Declare public members and attributes
public:
	//Parametized constructor
	CargoShip(string name, int tons) : Ship(name, " ")
	{
		tonnage = tons;
	}
	//Mutator
	void setmaxTonnage(int tons)
	{
		tonnage = tons;
	}
	//Accessor
	int getmaxTonnage()
	{
		return  tonnage;
	}
	virtual void print() const override//This function displays the Ship Name and Capacity in tones
	{
		cout << setw(20) << left << "Ship Name: " << shipName << endl;
		cout << setw(20) << left << "Cargo Capacity: " << tonnage << " Tons" << endl;
	}



};

#endif