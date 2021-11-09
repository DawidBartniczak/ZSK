#include <iostream>
using namespace std;

class Worker {
	public:
		string name, surname;
		
		Worker();
		Worker(string, string);
		
		~Worker() {
			cout << "Dzie³o destrukcji" << endl;
		};
		
		void getData();
};

Worker::Worker() { }
Worker::Worker(string pName, string pSurname):
	name {pName},
	surname {pSurname} { }

void Worker::getData() {
	cout << "Imie i nazwisko: " << name << " " << surname << endl;
}

void createWorkerObject(string name, string surname) {
	Worker newWorker(name, surname);
	newWorker.getData();
	cout << "createWorkerObject();" << endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	
	createWorkerObject("Marek", "Grzegorz");
	
	Worker *p_nowak2 = new Worker("Nowak", "Jeziorañski");
	p_nowak2->getData();
	
	delete p_nowak2; // Destruktor dla wskaŸnika nie wykonuje siê automatycznie.
	
	return 0;
}
