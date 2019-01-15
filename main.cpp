
#include "Vehicle.h"
#include "Car.h"
#include <iostream>
#include <string.h>
#include <fstream>

int main()
{
	/*
	ifstream inputFilePark("Park");
	ifstream inputFileRides("Rides");

	if (!inputFilePark)
	{
		cerr << "Unable to open file";
		exit(1); // call system to stop
	}
	while(!input.eof())
	{
		string line, token;
		getline(inputFilePark, line);
		istringstream input{line};
		getline(input, token, ", ");
	}
	*/

	Vehicle vehicle(4, "red", "gas", "VW", 2000, 2, 2001, 4.5);
	vehicle.display();

	Car car(2, "bleu", "petrol", "Golan", 1200, 2, 2021, 6.7);
	car.display();




}

