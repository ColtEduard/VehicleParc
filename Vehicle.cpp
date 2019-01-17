

#include "Vehicle.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

/*
// Unknown type;
const int UNKNWON = -1;

// Fuel type
const int GAS = 1;
const int DIESEL = 2;
const int HYDROGEN = 3;

// Colours
const int RED = 1;
const int GREEN = 2;
const int BLUE = 3;
const int WHITE = 4;
const int BLACK = 5;
const int YELLOW = 6;
const int BROWN = 7;
const int ORANGE = 8;

// Brands
const int MERCEDES = 1;
const int VOLKSWAGEN = 2;
const int GMC = 3;
const int BMW = 4;
*/

int Vehicle::globalID = 0;

Vehicle::Vehicle()
{
	globalID++;
	this->id=globalID;
	this->numberWheels = 0;
	this->colour = "";
	this->fuel = "";
	this->brand = "";
	this->cylindricalCapacity = 0;
	this->numberSeats = 0;
	this->year = 0;
	this->consumption = 0;
	this->type = "Vehicle";
	
}

Vehicle::Vehicle(int numberWheels, string colour, string fuel, string brand,
	int cylindricalCapacity, int numberSeats, int year, double consumption)
{
	
	this->id = globalID++;
	this->numberWheels = numberWheels;
	this->colour = colour;
	this->fuel = fuel;
	this->brand = brand;
	this->cylindricalCapacity = cylindricalCapacity;
	this->numberSeats = numberSeats;
	this->year = year; 
	this->consumption = consumption;
	this->type = "Vehicle";
	//cout << "Created Vehicle" << endl;
}

Vehicle::~Vehicle()
{
    
}

// ---SETTERS---

void Vehicle::setId(int id)
{
	this->id = id;
}

void Vehicle::setNumberWheels(int number)
{
     this->numberSeats = number;
}

void Vehicle::setCoulour(string colour)
{
    this->colour = colour;
}

void Vehicle::setFuel(string fuel)
{
    this->fuel = fuel;
}

void Vehicle::setBrand(string brand)
{
    this->brand = brand;
}

void Vehicle::setCylindricalCapacity(int cc)
{
    this->cylindricalCapacity = cc;
}

void Vehicle::setNumberSeats(int number)
{
    this->numberSeats = number;
}

void Vehicle::setYear(int year)
{
    this->year = year;
}

void Vehicle::setConsumption(double consumption)
{
    this->consumption = consumption;
}

// ---GETTERS---

int Vehicle::getId()
{
	return id;
}

int Vehicle::getNumberWheels()
{
    return numberSeats;
}

string Vehicle::getCoulour()
{
    return colour;
}

string Vehicle::getFuel()
{
    return fuel;
}

string Vehicle::getBrand()
{
    return brand;
}

int Vehicle::getCylindricalCapacity()
{
    return cylindricalCapacity;
}

int Vehicle::getNumberSeats()
{
    return numberSeats;
}

int Vehicle::getYear()
{
    return year;
}

double Vehicle::getConsumption()
{
    return consumption;
}

string  Vehicle::getType()
{
	return type;
}

// UTILITY
void Vehicle::display()
{
	cout << "Vehicle ID: " << id << endl;
	cout << "Type: " << type << endl;
	cout << "Number wheels: " << numberWheels << endl;
	cout << "Colour: " << colour << endl;
	cout << "Fuel: " << fuel << endl;
	cout << "Brand: " << brand << endl;
	cout << "Cylindrical Capacity: " << cylindricalCapacity << endl;
	cout << "Number seats: " << numberSeats << endl;
	cout << "Year: " << year << endl;
	cout << "Consumption: " << consumption << endl;
	cout << "------------------------------" << endl;
	cout << "------------------------------" << endl;


}
