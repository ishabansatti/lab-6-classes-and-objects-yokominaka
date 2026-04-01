// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 06 (OOP)

#include<iostream>
using namespace std;

class Rectangle {
public:
	double length;
	double width;
};

void compare(Rectangle a, Rectangle b) {
	double areaofA = a.length*a.width;
	double areaofB = b.length*b.width;

	if (areaofA > areaofB) {
		cout << "Rectangle a has larger area: " << areaofA << endl;
	} else if (areaofB > areaofA) {
		cout << "Rectangle b has larger area: " << areaofB << endl;
	} else {
		cout << "Both rectangles have equal area: " << areaofA << endl;
	}
}

int main() {
	Rectangle a={8, 5};
	Rectangle b={6, 6};

	compare(a,b);
	return 0;
}
