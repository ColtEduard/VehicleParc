
#include "Vehicle.h"
#include <iostream>

using namespace std;

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


Vehicle::Vechice()
{
 this->number_wheels = NULL;
 this->colour = NULL;
 this->fuel = NULL;
 this->brand = NULL;
 this->cylindrical_capacity = NULL;
 this->number_seats = NULL;
 this->year = NULL; 
 this->consumption = NULL;
}

Vehicle::Vehicle(int number_wheels, int colour, int fuel, int brand, int cylindrical_capacity, int number_seats, int year, int consumption)
{
 this->number_wheels = number_seats;
 this->colour = colour;
 this->fuel = fuel;
 this->brand = brand;
 this->cylindrical_capacity = cylindrical_capacity;
 this->number_seats = number_seats;
 this->year = year; 
 this->consumption = consumption;
}

void Vehicle::setNumber_wheels(int number)
{
     this->number_seats = number;
}

void Vehicle::setCoulour(int colour)
{
    this->colour = colour;
}

void Vehicle::setFuel(int fuel)
{
    this->fuel = fuel;
}

void Vehicle::setBrand(int brand)
{
    this->brand = brand;
}

void Vehicle::setCylindrical_capacity(int cc)
{
    this->cylindrical_capacity = cc;
}

void Vehicle::setNumber_seats(int number)
{
    this->number_seats = number;
}

void Vehicle::setYear(int year)
{
    this->year = year;
}

void Vehicle::setConsumption(int consumption)
{
    this->consumption = consumption;
}

int getNumber_wheels()
{
    return this->number_seats;
}

int getCoulour()
{
    return this->colour;
}

int getFuel()
{
    return this->fuel;
}

int getBrand()
{
    return this->brand;
}

int getCylindrical_capacity()
{
    return this->cylindrical_capacity;
}

int getNumber_seats()
{
    return this->number_seats;
}

int getYear()
{
    return this->year;
}

int getConsumption()
{
    return this->consumption;
}


Vehicle::~Vechicle()
{
    
}
