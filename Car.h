#pragma once
#include"vehicle.h"

class Car : public Vehicle
{
private:
	int numberOfDoors;
public:
	Car() {};
	float getNumberOfDoors() const {};
	void setNumberOfDoors() {};
	void displayInfo() {};
};

