#pragma once
#include <iostream>

class Property {
protected:
	double worth;
public:
	Property(double worth = 0);
	void setWorth(double worth);
	double getWorth();
	virtual double tax() = 0;
	virtual ~Property();
};

class Apartment : public Property {
public:
	Apartment(double worth);
	virtual double tax() override;
	virtual ~Apartment();
};

class Car : public Property {
public:
	Car(double worth);
	virtual double tax() override;
	virtual ~Car();
};

class CountryHouse : public Property {
public:
	CountryHouse(double worth);
	double tax() override;
	virtual ~CountryHouse();
};

