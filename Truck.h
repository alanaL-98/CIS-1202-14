#pragma once
#include"vehicle.h"

class Truck : public Vehicle
{
private:
	float towingCapacity;
public:
	Truck() {};
	float getTowingCapacity() const {};
	void setTowingCapacity() {};
	void displayInfo() {};
};

