#include "Car.h"

Car::Car(int doorNum, string m, int year) : Vehicle (m, year)
{
	numberOfDoors = doorNum;
};
float Car::getNumberOfDoors() const
{
	return numberOfDoors;
};
void Car::setNumberOfDoors(int userDoors)
{
	if (userDoors > -1) {
		numberOfDoors = userDoors;
	}
	else {
		cout << "Invalid entry! Try again.";
	}
};
void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Doors: " << numberOfDoors << endl;
};
