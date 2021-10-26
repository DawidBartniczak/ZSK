#include <iostream>
using namespace std;

class Worker {
	public:
		unsigned int id {1};
		string name {"Jerzy"}, surname {"Sabiniewicz"}, nickname {"ZJUJU11"};
		
		void printData();
		
		Worker(int = 2, string = "Marek", string = "Nowak", string = "Grzegorz");
};

void Worker::printData() {
	cout	<< endl << "--- " << name << " " << surname << " ---" << endl
			<< "Pseudonim: " << nickname << endl
			<< "ID: " << id << endl;
}

Worker::Worker(int id, string name, string surname, string nickname) {
	Worker::id = id;
	Worker::name = name;
	Worker::surname = surname;
	Worker::nickname = nickname;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	
	Worker zjuju;
	zjuju.printData();
	
	return 0;
}
