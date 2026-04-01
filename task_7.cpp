// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 06 (OOP)


#include<iostream>
#include<string>
using namespace std;

class Sensor{
public:
    static int totalSensors;
    int id;

    Sensor() {
        totalSensors++;
        id = totalSensors;
    }
};
int Sensor::totalSensors = 0;

int main(){
    Sensor s1;
    Sensor s2;
    Sensor s3;
    Sensor s4;

    cout<<"Sensor 1 id: #"<<s1.id<<endl;
    cout<<"Sensor 2 id: #"<<s2.id<<endl;
    cout<<"Sensor 3 id: #"<<s3.id<<endl;
    cout<<"Sensor 4 id: #"<<s4.id<<endl;
    cout<<"Total sensors: "<<Sensor::totalSensors<<endl;

    return 0;
}
