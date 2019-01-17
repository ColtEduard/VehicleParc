#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string.h>
using namespace std;



class Vehicle {

protected:

	int id;
	int numberWheels;
	string colour;
	string fuel;
	string brand;
	int cylindricalCapacity;
	int numberSeats;
	int year;
	double consumption;
	string type;

public:

	Vehicle();
	Vehicle(int, string, string, string, int, int, int, double);

	~Vehicle();
	/*
	// Fuel type
	const int GAS, DIELES, HYDROGEN;

	// colours
	const int RED, GREEN, BLUE, WHIE, BLACK, YELLOW, BROWN, ORANGE;

	// brands
	const int MERCEDES, VOLKSWAGEN, GMC, BMW;
	*/

	// SETTERS
	void setId(int);
	void setNumberWheels(int);
	void setCoulour(string);
	void setFuel(string);
	void setBrand(string);
	void setCylindricalCapacity(int);
	void setNumberSeats(int);
	void setYear(int);
	void setConsumption(double);

	// GETTERS
	int getId();
	int getNumberWheels();
	string getCoulour();
	string getFuel();
	string getBrand();
	int getCylindricalCapacity();
	int getNumberSeats();
	int getYear();
	double getConsumption();
	string getType();

	// UTILITY
	void display();







};

#endif /* VEHICLE_H */
