// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 06 (OOP)


#include<iostream>
using namespace std;

class MathConstants{
private:
    const double pi;
    const double e;

public:
    MathConstants():pi(3.14159),e(2.71828) {}
    double getPi() const { return pi;}
    double getE() const { return e; }


};

int main(){
    const MathConstants math;
    cout<<"Pi:"<<math.getPi()<<endl;
    cout<<"Euler number: "<<math.getE()<<endl;

    return 0;
}
