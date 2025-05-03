#pragma once
#include"vehicle.h"

class Car : public Vehicle
{
private:
	int numberOfDoors;
public:
	Car() { numberOfDoors = 0; };
	Car(int doorNum, string m, int year);
	float getNumberOfDoors() const;
	void setNumberOfDoors(int userDoors);
	void displayInfo() override;
};

