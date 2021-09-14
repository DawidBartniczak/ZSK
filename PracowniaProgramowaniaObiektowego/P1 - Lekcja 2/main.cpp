#include <iostream>
using namespace std;

class Worker {
	public:
		string name;
		string surname;
		string nationality;
		unsigned short int birthYear;
		char gender;
		float height;
		
		void showName();
		void showAllInfo();
};

void Worker::showName() {
	cout << name << " " << surname << endl;
}

void Worker::showAllInfo() {
	cout	<< "--- DANE ---" << endl
			<< "Imie i nazwisko: ";
	
	showName();
	
	cout 	<< "Narodowoœæ: " << nationality << endl
			<< "Rok urodzenia: " << birthYear << endl
			<< "Wzrost: " << height << endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	Worker worker1;
	
	
	worker1.name = "Jerzy";
	worker1.surname = "Sabiniewicz";
	worker1.nationality = "PL";
	worker1.birthYear = 1949;
	worker1.gender = 'M';
	worker1.height = 170;
	
	worker1.showAllInfo();
	
	return 0;
}
