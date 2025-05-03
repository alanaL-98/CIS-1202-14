#ifndef CAR_H
#define CAR_H
#include"vehicle.h"

class Car : public Vehicle//inheriting from vehicle class
{
private:
	int numberOfDoors;
public:
	Car() { numberOfDoors = 0; };
	Car(int doorNum, string m, int year);
	float getNumberOfDoors() const;
	void setNumberOfDoors(int userDoors);
	void displayInfo() override;//overriding for polymorphism 
};
#endif
