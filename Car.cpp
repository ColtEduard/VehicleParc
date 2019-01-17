#include "Car.h"
#include "Vehicle.h"


using namespace std;


Car::Car() : Vehicle() 
{
	this->numberWheels = 4;
	this->type="Car";
}

Car::Car(string colour, string fuel, string brand,
	int cylindricalCapacity, int numberSeats, int year, double consumption)
	:Vehicle(4, colour, fuel, brand,
		cylindricalCapacity, numberSeats, year, consumption)
{
	this->type = "Car";

	//cout << "Car created" << endl;

}

Car::~Car()
{

}
