#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"
#include <iostream>
#include <string>

using namespace std;

class Bus : public Vehicle
{

public:
	Bus();
	Bus(string, string, string, int, int, int, double);
	~Bus();

};

#endif /* BUS_H */