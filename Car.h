#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include <iostream>
#include <string>

using namespace std;

class Car : public Vehicle
{

public:
Car();
Car(string, string, string, int, int, int, double);
~Car();


};

#endif /* CAR_H */
