#include <iostream>

using namespace std;

struct Date {
	unsigned short int dd, mm, yyyy;
};

struct Student {
	string name, surname;
	unsigned int id;
	Date birthDay;
	string gradeSubjects[3];
	unsigned short int grade[3][5];
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	
	Student nowak{
		"Marek Grzegorz", "Nowak", 100,
		{28, 9, 1966},
		{"EDB", "BHP", "Podstawy Przedsiêbiorczoœci"},
		{{6, 6, 5, 6, 6}, {5, 5, 6, 6, 7}, {6, 6, 2, 4, 5}}
	};
	
	cout 	<< "Imie i nazwisko: " << nowak.name << " " << nowak.surname << endl
			<< "ID: " << nowak.id << endl
			<< "Data urodzenia: " << nowak.birthDay.dd << "-" << nowak.birthDay.mm << "-" << nowak.birthDay.yyyy << endl
			<< "Oceny:" << endl << endl;
	
	for (int i = 0; i < 3; i++) {
		cout << nowak.gradeSubjects[i] << ": ";
		for (int j = 0; j < 5; j++) {
			cout << nowak.grade[i][j] << ", ";
		}
		cout << endl;
	}
	
	return 0;
}
