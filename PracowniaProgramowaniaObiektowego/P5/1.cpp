#include <iostream>
using namespace std;

class Vehicle {
	public:
		string make, model, type, fuel;
		unsigned short int generation, productionYear;
		unsigned int weight;
		
		void showData();
};

void Vehicle::showData() {
	cout	<< "--- " << make << " " << model << " ---" << endl
			<< "Typ: " << type << endl
			<< "Rodzaj paliwa: " << fuel << endl
			<< "Generacja: " << generation << endl
			<< "Rok produkcji: " << productionYear << endl
			<< "Waga: " << weight << "kg" << endl;
}

int main(int argc, char** argv) {
	Vehicle car = {"Toyota", "Auris", "CAR", "PETROL", 3, 2015, 1370};
	Vehicle bus = {"Solaris", "Urbino 12", "BUS", "DIESEL", 4, 2018, 10800};
	Vehicle tram = {"Modertrans", "Moderus Beta", "TRAM", "ELECTRIC", 1, 2017, 40600};
	
	car.showData();
	cout << endl;
	bus.showData();
	cout << endl;
	tram.showData();
	
	return 0;
}
