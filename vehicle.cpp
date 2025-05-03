#include "vehicle.h"


Vehicle::Vehicle (string m, int year)//initializes passed parameters with private members of class
{
	manufacturer = m;
	yearBuilt = year;
};
string Vehicle::getManufacturer() const//const to ensure no data is accidentally changed with retrieval
{
	return manufacturer;
};
int Vehicle::getYearBuilt() const
{
	return yearBuilt;
};
void Vehicle::setManufacturer(string userM) 
{
	manufacturer = userM;//initializes private member with user inputted manufact. 
};
void Vehicle::setYearBuilt(int userY)
{
	if (userY > 0) {//ensureing no number below zero is entered for year built 
		yearBuilt = userY;
	}
	else {
		cout << "Invalid entry! Try again.";
	}
};
void Vehicle::displayInfo() //base class display function to be called by derived functions
{
	cout << "Vehicle information:" << endl
		<< "Manufacturer: " << manufacturer << endl
		<< "Year built: " << yearBuilt << endl;
};

