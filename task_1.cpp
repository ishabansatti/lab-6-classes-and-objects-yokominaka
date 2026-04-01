// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 06 (OOP)
#include<iostream>
#define PI 3.14159
using namespace std;

class Circle{
public:
    double radius;

    double area();
    double circumference();
};

double Circle::area(){
    return PI*radius*radius;
}

double Circle::circumference()
{
    return 2*PI*radius;
}
int main(){
    Circle c;
    c.radius = 5.0;
    cout<<"Area:"<< c.area()<<endl;
    cout<<"Circumference:"<< c.circumference()<<endl;
    return 0;
}
