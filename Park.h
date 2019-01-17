#ifndef PARK_H
#define PARK_H
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorcycle.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Park {

protected:
	double GAS_PRICE;
	double PETROL_PRICE;
	double ELECTRIC_PRICE;
private:
	vector<Vehicle> vehicles;
	vector<string> split(const string&, const string&);
public:
	Park(double, double, double);
	vector<Vehicle> createVehicles(string);
	double getExpenses(int, int);
	void getVehicleById(int ,Vehicle*);
	void calculateExpensesFromRides(string);
};

#endif /*PARK_H*/