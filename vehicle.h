#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include<string>

using namespace std;

class Vehicle
{
private:
	string manufacturer;
	int yearBuilt;
public:
	Vehicle() { manufacturer = " ", yearBuilt = 0; };//defaul constructor
	Vehicle(string m, int year);//constructor with parameters
	//getters/accessors
	string getManufacturer() const;
	int getYearBuilt() const;
	//setters/mutators
	void setManufacturer(string userM);
	void setYearBuilt(int userY);
	//display function set to virtual so it can be called for derived classes
	virtual void displayInfo();

};

#endif