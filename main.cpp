

#include "Vehicle.h"
#include "Car.h"
#include "Park.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#ifndef WINPAUSE
#define WINPAUSE system("pause");
#endif


int main()
{

	Park park(4.3, 5.7, 2.5);
	vector <Vehicle> vehicles = park.createVehicles("vehicles.txt");
	


	for (auto vehicle : vehicles)
	{
		vehicle.display();
	}

	park.calculateExpensesFromRides("rides.txt");



	WINPAUSE
}
