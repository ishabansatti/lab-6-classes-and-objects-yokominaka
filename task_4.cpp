// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 06 (OOP)

#include<iostream>
#include<string>
using namespace std;
class Person{
public:
    string name;
    int age;
    Person():name("unknown"),age(0) {}
    Person (string name): name(name),age(0) {}
    Person(string name, int age): name(name), age(age) {}
};

int main(){
    Person p1; 
    Person p2("hamza"); 
    Person p3("ali",25); 

    cout<<"Person 1: "<<p1.name<< ", "<<p1.age<<endl;
    cout<<"Person 2: "<<p2.name<< ", "<<p2.age<<endl;
    cout<<"Person 3: "<<p3.name<< ", "<<p3.age<<endl;

    return 0;
}
