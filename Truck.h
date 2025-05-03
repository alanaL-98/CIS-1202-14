#ifndef TRUCK_H
#define TRUCK_H
#include"vehicle.h"

class Truck : public Vehicle//inheriting from vehicle class
{
private:
	float towingCapacity;
public:
	Truck() { towingCapacity = 0.0f; };//default constructor
	Truck(float towCap, string m, int year);
	float getTowingCapacity() const;
	void setTowingCapacity(float userTC);
	void displayInfo() override;//override to access and change the properties of the display info function in base class
};
#endif
