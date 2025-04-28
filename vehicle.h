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
	Vehicle() {};
	string getManufacturer() const { };
	int getYearBuilt() const{  };
	void setManufacturer() {};
	void setYearBuilt() {};
	void displayInfo() {};

};

