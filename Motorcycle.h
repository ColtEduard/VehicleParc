#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"
#include <iostream>
#include <string>

using namespace std;

class Motorcycle : public Vehicle
{

public:
	Motorcycle();
	Motorcycle(string, string, string, int, int, double);
	~Motorcycle();

};

#endif /* MOTORCYCLE_H */
