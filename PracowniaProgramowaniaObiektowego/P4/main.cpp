#include <iostream>
using namespace std;

class School {
	public:
		static string sSchool;
		static string sJobPosition;
		
		string name = "";
		string surname = "";
		
		void getData();
		void setData(string name, string surname);
		
		static string sGetSchool();
		static void sSetSchool(string school);
};

string School::sSchool = "ZS£";
string School::sJobPosition = "Jerzy Sabiniewicz's Replacement";

void School::getData() {
	cout	<< "--- DANE ---" << endl
			<< "Imie: " << name << endl
			<< "Nazwisko: " << surname << endl
			<< "Szko³a: " << sGetSchool() << endl
			<< "Rola: " << sJobPosition << endl;
}

void School::setData(string name, string surname) {
	School::name = name;
	School::surname = surname;
}

string School::sGetSchool() {
	return sSchool;
}

void School::sSetSchool(string school) {
	sSchool = school;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	
	School school;
	school.setData("Jerzy", "Nowak");
	school.sSetSchool("ZSK");
	school.getData();

	return 0;
}
