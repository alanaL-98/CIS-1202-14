#pragma once
#include<iostream>
#include<string>

using namespace std;

class Vehicle
{
private:
	string manufacturer;
	int yearBuilt;
public:
	Vehicle() { manufacturer = " ", yearBuilt = 0; };
	Vehicle(string m, int year);
	string getManufacturer() const;
	int getYearBuilt() const;
	void setManufacturer(string userM);
	void setYearBuilt(int userY);
	virtual void displayInfo();

};

