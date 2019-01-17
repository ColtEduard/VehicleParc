

#include "Vehicle.h"
#include "Car.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#ifndef WINPAUSE
#define WINPAUSE system("pause");
#endif



vector<string> split(const string& str, const string& delim)
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
	vector<Vehicle> vehicles;
	

	string line;
	ifstream myfile("vehicles.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			vector<string> v = split(line, ",");
			//vehicles.push_back(Vehicle(stoi(v[0]), v[1], stod())
			for (string const& value : v) {
				std::cout << value << " ";
			}
			cout << endl;
		}
		myfile.close();
	}
	else cout << "Unable to open file";

	/*ofstream myfile;
	myfile.open("example.txt");
	myfile << "Writing this to a file.\n";
	myfile.close();*/

	//Vehicle(numberWheels, colour, fuel, brand, cylindricalCapacity, numberSeats, year, consumption)
	//Car(colour, fuel, brand, cylindricalCapacity, numberSeats, year, consumption)
	
	Vehicle vehicle(4, "red", "gas", "VW", 2000, 2, 2001, 4.5);
	vehicle.display();

	Car car("bleu", "petrol", "Golan", 1200, 2, 2021, 6.7);
	car.display();

	Car car2("black", "gas", "Golan", 3000, 1, 2020, 3.5);
	car2.display();

	WINPAUSE
}
}

