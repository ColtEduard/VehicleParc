#include "Vehicul.h"
#include <string.h>

using namespace std;

Vehicul::Vehicul() {

}

Vehicul::Vehicul(int id, int numarRoti, string culoare, int numarUsi, string marca, string model
	, string tipCarburant, double capacitateCilindrica
	, int numarLocuri, int anFabricatie, double consum_100)

	: id(id), numarRoti(numarRoti), culoare(culoare), numarUsi(numarUsi), marca(marca), model(model)
	, tipCarburant(tipCarburant), capacitateCilindrica(capacitateCilindrica), numarLocuri(numarLocuri)
	, anFabricatie(anFabricatie), consum_100(consum_100) {
}

Vehicul::~Vehicul() {
}

void Vehicul::setId(int id) {

	this->id = id;

}

void Vehicul::setNumarRoti(int numarRoti) {

	this->numarRoti = numarRoti;

}

void Vehicul::setCuloare(string culoare) {

	this->culoare = culoare;

}

void Vehicul::setNumarUsi(int numarUsi) {

	this->numarUsi = numarUsi;

}

void Vehicul::setMarca(string marca) {

	this->marca = marca;

}

void Vehicul::setModel(string model) {

	this->model = model;

}

void Vehicul::setTipCarburant(string tipCarburant) {

	this->tipCarburant = tipCarburant;

}

void Vehicul::setCapacitateCilindrica(double capacitateCilindrica) {

	this->capacitateCilindrica = capacitateCilindrica;

}

void Vehicul::setNumarLocuri(int numarLocuri) {

	this->numarLocuri = numarLocuri;

}

void Vehicul::setAnFabricatie(int anFabricatie) {

	this->anFabricatie = anFabricatie;

}

void Vehicul::setConsum_100(double consum_100) {

	this->consum_100 = consum_100;

}

int Vehicul::getId() {

	return id;

}

int Vehicul::getNumarRoti() {

	return numarRoti;

}

string Vehicul::getCuloare() {

	return culoare;

}

int Vehicul::getNumarUsi() {

	return numarUsi;

}

string Vehicul::getMarca() {

	return marca;

}

string Vehicul::getModel() {

	return model;

}

string Vehicul::getTipCarburant() {

	return tipCarburant;

}

double Vehicul::getCapacitateCilindrica() {

	return capacitateCilindrica;

}

int Vehicul::getNumarLocuri() {

	return numarLocuri;

}

int Vehicul::getAnFabricatie() {

	return anFabricatie;

}

double Vehicul::getConsum_100() {

	return consum_100;

}

void Vehicul::show() {


}