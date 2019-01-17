#include "Bus.h"
#include "Vehicle.h"


using namespace std;


Bus::Bus() : Vehicle()
{
	this->numberWheels = 4;
	this->type = "Bus";
}

Bus::Bus(string colour, string fuel, string brand,
	int cylindricalCapacity, int numberSeats, int year, double consumption)
	:Vehicle(4, colour, fuel, brand,
		cylindricalCapacity, numberSeats, year, consumption)
{
	this->type = "Bus";

	//cout << "Bus created" << endl;

}

Bus::~Bus()
{

}