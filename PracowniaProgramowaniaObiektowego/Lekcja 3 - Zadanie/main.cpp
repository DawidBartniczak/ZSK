#include <iostream>
using namespace std;

class Rectangle {
	public:
		double a;
		double b;
		
		double calculateField();
		double calculatePerimeter();
		void showInfo();
};

double Rectangle::calculateField() {
	return a*b;
}

double Rectangle::calculatePerimeter() {
	return (2*a)+(2*b);
}

void Rectangle::showInfo() {
	cout 	<< "a: " << a << endl
			<< "b: " << b << endl
			<< "Pole: " << calculateField() << endl
			<< "Obwód: " << calculatePerimeter() << endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	
	Rectangle rectangle1;
	double a, b;
	
	while (1) {
		cout << "Podaj a: ";
		cin >> a;
		cout << "Podaj b: ";
		cin >> b;
		cout << endl;
		
		if (a != 0 and b != 0) {
			break;
		}
	}
	
	rectangle1.a = a;
	rectangle1.b = b;
	
	rectangle1.showInfo();
	
	return 0;
}
