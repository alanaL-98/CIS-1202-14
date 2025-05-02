#pragma once
#include"vehicle.h"

class Car : public Vehicle
{
private:
	int numberOfDoors;
public:
	Car(int doorNum, string m, int year) : Vehicle(m, year);
	float getNumberOfDoors() const;
	void setNumberOfDoors(int userDoors);
	void displayInfo() override;
};

