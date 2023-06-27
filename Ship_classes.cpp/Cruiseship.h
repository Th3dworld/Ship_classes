//This is the specification fiile the Cruizeship class
//This is class will be derived from the Ship Class
#ifndef CRUISESHIP_H
#define CRUISESHIP_H
#include "Ship.h"

class Cruiseship : public Ship
{
	//Declare Private attributes
private:
	int maxCapacity;

	//Declare public members and attributes
public:
	//Parametized constructor
	Cruiseship(string name,  int cap) : Ship(name, " ")
	{
		maxCapacity = cap;
	}
	//Mutator
	void setmaxCapacity(int cap)
	{
		maxCapacity = cap;
	}
	//Accessor
	int getmaxCapacity()
	{
		return  maxCapacity;
	}
	virtual void print() const override//This function displays the Ship Name and Capacity
	{
		
		cout << setw(20) << left << "Ship Name: " << shipName << endl;
		cout << setw(20) << left << "Max Capacity: " << maxCapacity <<" passengers" << endl;
	}



};

#endif
