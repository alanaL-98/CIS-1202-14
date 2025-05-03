#include "Truck.h"

Truck::Truck(float towCap, string m, int year) : Vehicle(m, year)
{
	towingCapacity = towCap;
};
float Truck::getTowingCapacity() const
{
	return towingCapacity;
};
void Truck::setTowingCapacity(float userTC)
{
	if (userTC > -1) {
		towingCapacity = userTC;
	}
	else {
		cout << "Invalid entry! Try again";
	}
};
void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towingCapacity << endl;
};