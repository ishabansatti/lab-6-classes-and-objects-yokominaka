// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 06 (OOP)

#include<iostream>
#include<string>
using namespace std;

struct Address {
	string street;
	string city;
	int postalCode;
};

class Hospital {
public:
	string name;
	Address location;

	Hospital(string name, Address location) : name(name),location(location) {}


	void display(){
		cout<<"Hospital name: "<<name<<endl;
		cout<<"Street: " <<location.street<<endl;
		cout<<"City: " <<location.city<<endl;
		cout<<"Postal code: "<<location.postalCode<<endl;
	}
};

int main(){
	Address address={"12 Ravi road","Lahore",54000};
	Hospital h("City Care Hospital", address);

	h.display();

	return 0;
}
