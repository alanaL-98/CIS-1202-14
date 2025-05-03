#pragma once
#include"vehicle.h"

class Truck : public Vehicle
{
private:
	float towingCapacity;
public:
	Truck() { towingCapacity = 0.0f; };
	Truck(float towCap, string m, int year);
	float getTowingCapacity() const;
	void setTowingCapacity(float userTC);
	void displayInfo() override;
};

