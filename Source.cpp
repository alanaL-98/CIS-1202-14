//Alana Landfair
//CIS 1202.501 #14
//4-26-25

#include"vehicle.h"
#include"Car.h"
#include"Truck.h"

int main() {
	string userEntryM, carM, truckM;
	int year, yearC, yearT, doors;
	float towCap;

	cout << "Vehicle Program" << endl << endl;

	Vehicle v;
	cout << "Vehicle: " << endl
		<< "Enter the manufacturer: ";
	getline(cin, userEntryM);
	v.setManufacturer(userEntryM);
	cout << "Enter the year built: ";
	cin >> year;
	v.setYearBuilt(year);
	v.displayInfo();
	cout << endl;

	Car c;
	cout << "Car: " << endl
		<< "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, carM);
	c.setManufacturer(carM);
	cout << "Enter the year built: ";
	cin >> yearC;
	c.setYearBuilt(yearC);
	cout << "Enter the number of doors: ";
	cin >> doors;
	c.setNumberOfDoors(doors);
	c.displayInfo();
	cout << endl;

	Truck t;
	cout << "Truck: " << endl
		<< "Enter the manufacturer: ";
	cin.ignore();
	getline(cin, truckM);
	t.setManufacturer(truckM);
	cout << "Enter the year built: ";
	cin >> yearT;
	t.setYearBuilt(yearT);
	cout << "Enter the towing capacity: ";
	cin >> towCap;
	t.setTowingCapacity(towCap);
	t.displayInfo();
	cout << endl;



	return 0;
}

