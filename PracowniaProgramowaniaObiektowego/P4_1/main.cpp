#include <iostream>
using namespace std;

class Room {
	public:
		float length, width, height;
		
		inline float area() {
			return length * width;
		}
		inline float volume() {
			return area() * height;
		}
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	
	Room room = {25, 40, 3.5};
	cout << room.area() << endl << room.volume();
	
	return 0;
}
