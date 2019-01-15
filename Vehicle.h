

#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
using namespace std;



class Vechicle{
public: 
    Vehicle();

    // Fuel type
    const int GAS, DIELES, HYDROGEN;

    // colours
    const int RED, GREEN, BLUE, WHIE, BLACK, YELLOW, BROWN, ORANGE;

    // brands
    const int MERCEDES, VOLKSWAGEN, GMC, BMW;

    void setNumber_wheels(int number);
    void setCoulour(int colour);
    void setFuel(int fuel);
    void setBrand(int brand);
    void setCylindrical_capacity(int cc);
    void setNumber_seats(int number);
    void setYear(int year);
    void setConsumption(int consumption);

    int getNumber_wheels( );
    int getCoulour();
    int getFuel();
    int getBrand();
    int getCylindrical_capacity();
    int getNumber_seats();
    int getYear();
    int getConsumption();
   
    ~Vechicle();

private:
int number_wheels, colour, fuel, brand, cylindrical_capacity, number_seats, year, consumption;




};

#endif /* VEHICLE_H */