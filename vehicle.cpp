#include "vehicle.h"


Vehicle::Vehicle (string m, int year)
{
	manufacturer = m;
	yearBuilt = year;
};
string Vehicle::getManufacturer() const 
{
	return manufacturer;
};
int Vehicle::getYearBuilt() const 
{
	return yearBuilt;
};
void Vehicle::setManufacturer(string userM) 
{
	manufacturer = userM;
};
void Vehicle::setYearBuilt(int userY)
{
	if (userY > 0) {
		yearBuilt = userY;
	}
	else {
		cout << "Invalid entry! Try again.";
	}
};
void Vehicle::displayInfo() 
{
	cout << "Vehicle information:" << endl
		<< "Manufacturer: " << manufacturer << endl
		<< "Year built: " << yearBuilt << endl;
};

