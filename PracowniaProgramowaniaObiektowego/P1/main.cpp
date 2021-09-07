#include <iostream>
using namespace std;

class Worker {
	public:
		string name;
		string surname;
		unsigned short int age;
		
		void showName() {
			cout << name;
		}
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	Worker worker1;
	Worker worker2;
	
	worker1.name = "Marek";
	worker1.surname = "Nowak";
	worker1.age = 63;
	
	worker2.name = "Jerzy";
	worker2.surname = "Sabiniewicz";
	worker2.age = 72;
	
	worker1.showName();
	
	return 0;
}
