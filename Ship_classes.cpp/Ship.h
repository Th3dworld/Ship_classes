//This is the specification file for the ship class
#ifndef SHIP_H
#define SHIP_H
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class Ship
{
	//Declare protected attributes
	protected:
		string shipName, yearMade;
	
	//Declare public member functions
	public:
		//Default constructor with deligation
		Ship(): Ship(" ", " ")
		{
			
		}

		//Parametized constrictor that takes in two strings as arguments and assigns them to the name and year made attributes
		Ship(string name, string year)
		{
			shipName = name;
			yearMade = year;
		}

		//Mutator functions
		void setyearMade(string year)
		{
			yearMade = year;
		}
		void setshipName(string name)
		{
			shipName = name;
		}

		//Accessor functions
		string getyearMade() const
		{
			return yearMade;
		}
		string getshipName() const
		{
			return shipName;
		}
		virtual void print() const//This function displays the Ship Name and year made
		{
			cout << setw(20) << left <<"Ship Name: " << shipName << endl;
			cout << setw(20)<<left<<"Year made : " << yearMade << endl;
		
		}

};

#endif // !SHIP_H
