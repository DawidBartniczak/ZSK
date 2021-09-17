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
		cout << "Uda³o siê oswoiæ.";
	} else {
		cout << "Nie uda³o siê oswoiæ. Ps: Jesteœ martwy.";
	}
}

void Animal::feed() {
	if (eatsMeat) {
		cout << "*zjada miêso*";
	} else {
		cout << "*zjada liœcia*";
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
