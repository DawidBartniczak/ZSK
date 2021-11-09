#include <iostream>
using namespace std; 

class Animal {
	public:
		static int count;
		
		Animal();
		~Animal() {
			count--;
		};
};

int Animal::count = 0;

Animal::Animal() {
	count++;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	
	Animal solaris;
	Animal freddy;
	Animal *zjuju = new Animal();
	
	cout << "Ilo��: " << Animal::count << endl;
	
	delete zjuju; // Zjuju to nie animal g�upcze!                                                                                                                                                                                                                                                                                                                                                                                    
	
	cout << "Ilo��: " << Animal::count << endl;
	
	return 0;
}
