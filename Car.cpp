#include "Car.h"
#include <iostream>
#include <string.h>
using namespace std;


Car::Car()
{
    this->id++;

}

Car::Car(int numberWheels, string colour, string fuel, string brand,
	int cylindricalCapacity, int numberSeats, int year, double consumption)
{
	this->id++;
	this->numberWheels = numberSeats;
	this->colour = colour;
	this->fuel = fuel;
	this->brand = brand;
	this->cylindricalCapacity = cylindricalCapacity;
	this->numberSeats = numberSeats;
	this->year = year; 
	this->consumption = consumption;
    this->type = "Car";
}

void Car::display()
{
	cout << "Vehicle ID: " << id << endl;
    cout << "Type: " << type << endl;
	cout << "Number wheels: " << numberWheels << endl;
	cout << "Colour: " << colour << endl;
	cout << "Fuel: " << fuel << endl;
	cout << "Brand: " << brand << endl;
	cout << "Cylindrical Capacity: " << cylindricalCapacity; << endl;
	cout << "Number seats: " << numberSeats; << endl;
	cout << "Year: " << year << endl;
	cout << "Consumption: " << consumption << endl;
	cout << "------------------------------" << endl;
	cout << "------------------------------" << endl;
}
