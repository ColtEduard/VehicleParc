#ifndef VEHICUL_H
#define VEHICUL_H
#include <iostream>
#include <string.h>

using namespace std;

class Vehicul {

protected:

	int id;
	int numarRoti;
	string culoare;
	int numarUsi;
	string marca;
	string model;
	string tipCarburant;
	double capacitateCilindrica;
	int numarLocuri;
	int anFabricatie;
	double consum_100;

public:

	Vehicul();
	Vehicul(int, int, string, int, string, string, string, double, int, int, double);
	~Vehicul();
	void setId(int);
	void setNumarRoti(int);
	void setCuloare(string);
	void setNumarUsi(int);
	void setMarca(string);
	void setModel(string);
	void setTipCarburant(string);
	void setCapacitateCilindrica(double);
	void setNumarLocuri(int);
	void setAnFabricatie(int);
	void setConsum_100(double);

	int getId();
	int getNumarRoti();
	string getCuloare();
	int getNumarUsi();
	string getMarca();
	string getModel();
	string getTipCarburant();
	double getCapacitateCilindrica();
	int getNumarLocuri();
	int getAnFabricatie();
	double getConsum_100();


	virtual void show();

};

#endif /* VEHICUL_H */
