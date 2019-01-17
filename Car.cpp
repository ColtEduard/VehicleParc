#include "Car.h"
#include "Vehicle.h"


using namespace std;

Car::Car() : Vehicle() 
{
	this->numberWheels = 4;
	this->type="Vehicle";
}

Car::Car(string colour, string fuel, string brand,
	int cylindricalCapacity, int numberSeats, int year, double consumption)
	:Vehicle(4, colour, fuel, brand,
		cylindricalCapacity, numberSeats, year, consumption)
{
	this->type = "Vehicle";

}

Car::~Car()
{

}

void Car::display()
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
