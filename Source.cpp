//Alana Landfair
//CIS 1202.501 #14
//4-26-25

#include"vehicle.h"
#include"Car.h"
#include"Truck.h"

int main() {
	string userEntryM, carM, truckM;//to store user entered manufacturer for each class
	int year, yearC, yearT, doors;//year for each class and doors for car class
	float towCap;//only for truck class

	cout << "Vehicle Program" << endl << endl;

	Vehicle v;
	cout << "Vehicle: " << endl
		<< "Enter the manufacturer: ";
	getline(cin, userEntryM);
	v.setManufacturer(userEntryM);//stores info in vehicle class after each entry
	cout << "Enter the year built: ";
	cin >> year;
	v.setYearBuilt(year);
	v.displayInfo();
	cout << endl;

	Car c;
	cout << "Car: " << endl
		<< "Enter the manufacturer: ";
	cin.ignore();//skips buffer after cause of last getline
	getline(cin, carM);
	c.setManufacturer(carM);//stores info in car class after each entry
	cout << "Enter the year built: ";
	cin >> yearC;
	c.setYearBuilt(yearC);
	cout << "Enter the number of doors: ";
	cin >> doors;
	c.setNumberOfDoors(doors);
	c.displayInfo();//calls vehicles display info
	cout << endl;

	Truck t;
	cout << "Truck: " << endl
		<< "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, truckM);
	t.setManufacturer(truckM);//stores info in truck class after each entry
	cout << "Enter the year built: ";
	cin >> yearT;
	t.setYearBuilt(yearT);
	cout << "Enter the towing capacity: ";
	cin >> towCap;
	t.setTowingCapacity(towCap);//sets towing capacity
	t.displayInfo();//displays vehicle class function
	cout << endl;



	return 0;
}

