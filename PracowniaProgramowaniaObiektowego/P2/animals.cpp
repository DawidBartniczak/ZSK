#include <iostream>
using namespace std;

class Animal {
	public:
		string species;
		string animalKingdom;
		string name;
		char gender;
		unsigned short int birthYear;
		float weight;
		bool hasFur;
		bool eatsMeat;
		bool isDangerous;
		
		void pet();
		void feed();
};

void Animal::pet() {
	if (!isDangerous) {
		cout << "Uda�o si� oswoi�.";
	} else {
		cout << "Nie uda�o si� oswoi�. Ps: Jeste� martwy.";
	}
}

void Animal::feed() {
	if (eatsMeat) {
		cout << "*zjada mi�so*";
	} else {
		cout << "*zjada li�cia*";
	}
}

int main() {
	Animal bob;
	
//	bob.species = "Cat";
//	bob.animalKingdom = "Mammal";
//	bob.name = "Bob";
//	bob.gender = 'M';
	
	return 0;
}
