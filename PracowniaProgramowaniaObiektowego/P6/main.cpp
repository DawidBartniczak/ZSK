#include <iostream>
using namespace std;

struct Date {
	int dd, mm, yyyy;
};

class Car {
	public:
		int id;
		string brand, model, color, engine;
		unsigned short int power;
		float price;
		Date dateOfProduction;
		
		void printData();
		
		Car(int, string, string, string, unsigned short int, string, float, Date);
//		Car() {
//			id = 1;
//			brand = "Toyota", model = "Yaris", color = "Bia³y";
//			power = 90, engine = "1.4 D4D DIESEL";
//			price = 12000;
//			dateOfProduction = {14, 6, 2008};
//		}
};

Car::Car(int id, string brand, string model, string color, unsigned short int power, string engine, float price, Date dateOfProduction) {
	Car::id = id;
	Car::brand = brand;
	Car::model = model;
	Car::color = color;
	Car::power = power;
	Car::engine = engine;
	Car::price = price;
	Car::dateOfProduction = dateOfProduction;
}

void Car::printData() {
	cout	<< "--- " << brand << " " << model << " ---" << endl
			<< "ID: " << id << endl
			<< "Kolor: " << color << endl
			<< "Moc: " << power << endl
			<< "Silnik: " << engine << endl
			<< "Cena: " << price << endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	
	Car car(2, "Toyota", "Auris", "Metalic Blue", 136, "1.6 VALVEMATIC PETROL", 56500, {1, 2, 2015});
	car.printData();
	
	return 0;
}
