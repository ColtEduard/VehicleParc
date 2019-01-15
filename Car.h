#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string.h>
using namespace std;

class Car : public Vehicle
{

public:
Car();
Car(int, string, string, string, int, int, int, double);
~Car();
void display();

};

#endif /* CAR_H */