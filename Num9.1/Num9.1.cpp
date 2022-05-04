#include "Header.h"

int main() {
	setlocale(0, "");
	Property** array = new Property*[7];

	array[0] = new Apartment(100057);
	array[1] = new Apartment(25000);
	array[2] = new Apartment(1000);
	array[3] = new Car(10000);
	array[4] = new Car(18000);
	array[5] = new CountryHouse(30000);
	array[6] = new CountryHouse(100000);

	for (int i = 0; i < 7; i++) {
		std::cout << array[i]->tax() << "\n";
		delete array[i];
	}

	return 0;
}