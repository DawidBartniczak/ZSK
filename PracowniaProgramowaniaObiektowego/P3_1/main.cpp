#include <iostream>

using namespace std;

struct Date {
	unsigned short int dd, mm, yyyy;
};

class Worker {
	public:
		unsigned int id {};
		string name {}, surname {};
		Date birthDay {};

		void showAllData();
		void setData(unsigned int id, string name, string surname, Date birthDay);
};

void Worker::showAllData() {
	cout	<< "--- DANE PRACOWNIKA ---" << endl
			<< "ID: " << id << endl
			<< "Imie i nazwisko: " << name << " " << surname << endl
			<< "Data urodzenia: " << birthDay.dd << "-" << birthDay.mm << "-" << birthDay.yyyy << endl;
}

void Worker::setData(unsigned int id, string name, string surname, Date birthDay) {
	Worker::id = id;
	Worker::name = name;
	Worker::surname = surname;
	Worker::birthDay = birthDay;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");

	Worker jerzy;

	jerzy.setData(1, "Jerzy", "Sabiniewicz", Date{28, 9, 1968});

	jerzy.showAllData();

	return 0;
}
