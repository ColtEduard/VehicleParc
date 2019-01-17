#include "Motorcycle.h"
#include "Vehicle.h"


using namespace std;


Motorcycle::Motorcycle() : Vehicle()
{
	this->numberWheels = 2;
	this->numberSeats = 2;
	this->type = "Motorcycle";
}

Motorcycle::Motorcycle(string colour, string fuel, string brand,
	int cylindricalCapacity, int year, double consumption)
	:Vehicle(2, colour, fuel, brand,
		cylindricalCapacity, 2, year, consumption)
{
	this->type = "Motorcycle";

	//cout << "Motorcycle created" << endl;

}

Motorcycle::~Motorcycle()
{

}