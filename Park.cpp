#include "Park.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>


Park::Park(double gasPrice, double petrolPrice, double electricPrice)
{
	GAS_PRICE = gasPrice;
	PETROL_PRICE = petrolPrice;
	ELECTRIC_PRICE = electricPrice;
}

vector<string> Park::split(const string& str, const string& delim)
{
	vector<string> tokens;
	size_t prev = 0, pos = 0;
	do
	{
		pos = str.find(delim, prev);
		if (pos == string::npos) pos = str.length();
		string token = str.substr(prev, pos - prev);
		if (!token.empty()) tokens.push_back(token);
		prev = pos + delim.length();
	} while (pos < str.length() && prev < str.length());

	return tokens;
}

void Park :: calculateExpensesFromRides(string ridesFileName) 
{
	string line;
	ifstream ridesFile(ridesFileName);

	if (ridesFile.is_open())
	{
		while (getline(ridesFile, line) && line.length() > 1)
		{
			vector<string> r = split(line, ",");
			getExpenses(stoi(r[0]), stoi(r[1]));

		}

		ridesFile.close();

	}
	else
	{
		cerr << "Could not open rides file";
	}
}


double Park::getExpenses(int id, int km)
{

	double expenses;
	int price;

	//cout << "\n\n\n" << id << "\n\n\n";
	for (auto vehicle : vehicles)
	{
		if (vehicle.getId() == id)
		{
			//vehicle.display();

			if (vehicle.getFuel() == "gas")
			{
				price = GAS_PRICE;
			}
			else if (vehicle.getFuel() == "petrol")
			{
				price = PETROL_PRICE;
			}
			else if (vehicle.getFuel() == "electric")
			{
				price = ELECTRIC_PRICE;
			}

			expenses = ((km / 100.0)*vehicle.getConsumption())*price;
			cout << endl << "id: " << id << endl;
			cout << "km: " << km << endl;
			cout << "price: " << price << endl;
			cout << "consumption: " << vehicle.getConsumption() << endl;
			cout << "expenses : " << expenses << endl;

			cout << "####################" << endl;
			cout << "####################" << endl << endl;

			return expenses;

		}
	}
	return 0;
	
}

 void Park::getVehicleById(int id, Vehicle* vehicle_out ) {
	 
	 for (auto vehicle : vehicles)
	 {
		 if (vehicle.getId() == id)
		 {
			 cout << "founde vehicle";
			 vehicle_out = &vehicle;
			 
		 }
	 }
	 vehicle_out = NULL;

}

vector<Vehicle> Park::createVehicles(string vehiclesFileName)
{
	Vehicle vehicle;
	string type;

	string line;
	ifstream vehiclesFile(vehiclesFileName);


	if (vehiclesFile.is_open())
	{
		while (getline(vehiclesFile, line) && line.length() > 1)
		{

			vector<string> v = split(line, ",");
			// in the file we start each line with
			// V - Vehicle
			// C - Car
			// M - Motorcycle
			type = v[0];

			//Vehicle(numberWheels, colour, fuel, brand, cylindricalCapacity, numberSeats, year, consumption)
			//Bus(colour, fuel, brand, cylindricalCapacity, numberSeats, year, consumption)
			//Car(colour, fuel, brand, cylindricalCapacity, numberSeats, year, consumption)
			//Motorcycle(colour, fuel, brand, cylindricalCapacity, year, consumption)
			if (type == "V")
			{
				vehicle = Vehicle(stoi(v[1]), v[2], v[3], v[4], stoi(v[5]), stoi(v[6]), stoi(v[7]), stod(v[8]));
			}
			else if (type == "C")
			{
				vehicle = Car(v[1], v[2], v[3], stoi(v[4]), stoi(v[5]), stoi(v[6]), stod(v[7]));
			}
			else if (type == "M")
			{
				vehicle = Motorcycle(v[1], v[2], v[3], stoi(v[4]), stoi(v[5]), stod(v[6]));
			}
			else if (type == "B")
			{
				vehicle = Bus(v[1], v[2], v[3], stoi(v[4]), stoi(v[5]), stoi(v[6]), stod(v[7]));
			}

			this->vehicles.push_back(vehicle);
		}

		vehiclesFile.close();
	}
	else cerr << "Unable to open file";

	return vehicles;
}