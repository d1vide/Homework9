#include "Header.h"

Property::Property(double worth) {
	this->worth = worth;
}

void Property::setWorth(double worth) {
	this->worth = worth;
}

double Property::getWorth() {
	return worth;
}

Property::~Property() {

}



Apartment::Apartment(double worth) : Property(worth){

}

double Apartment::tax() {
	return 0.001*getWorth();
}

Apartment::~Apartment() {

}



Car::Car(double worth) : Property(worth) {

}

double Car::tax() {
	return 0.005 * this->worth;
}

Car::~Car() {
}




CountryHouse::CountryHouse(double worth) : Property(worth){

}

double CountryHouse::tax() {
	return 0.002 * this->worth;
}

CountryHouse::~CountryHouse() {

}