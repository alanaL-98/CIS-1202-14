#include "Truck.h"

Truck::Truck(float towCap, string m, int year) : Vehicle(m, year)//inheriting base class member variables
{
	towingCapacity = towCap;//sets towing capacity
};
float Truck::getTowingCapacity() const
{
	return towingCapacity;
};
void Truck::setTowingCapacity(float userTC)
{
	if (userTC > -1) {//ensures a values less than zero cannot be passed through
		towingCapacity = userTC;
	}
	else {
		cout << "Invalid entry! Try again";
	}
};
void Truck::displayInfo()
{
	Vehicle::displayInfo();//calls base class function
	cout << "Towing Capacity: " << towingCapacity << endl;
};