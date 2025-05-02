#pragma once
#include"vehicle.h"

class Truck : public Vehicle
{
private:
	float towingCapacity;
public:
	Truck(float towCap, string m, int year) : Vehicle(m, year);
	float getTowingCapacity() const;
	void setTowingCapacity(float userTC);
	void displayInfo() override;
};

