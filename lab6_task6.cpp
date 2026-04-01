// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 06 (OOP)


#include <iostream>
using namespace std;
class Box {
public:
double l, w, h;
Box() : l(1), w(1), h(1) {} 
Box(double side) : l(side), w(side), h(side) {} 
Box(double a, double b, double c) : l(a), w(b), h(c) {}

double volume(){ return l*w*h;}

void display(){cout<<l<<"x"<<w<<"x"<<h
<<" vol="<< volume()<<endl; }
};

Box largerBox(Box a,Box b){
    if(a.volume()>b.volume()){
        return a;
    }else{
        return b;
    }
}
int main(){
    Box box1;
    Box box2(3);
    Box box3(2,4,6);

    Box largest=largerBox(box2,box3);
    cout<<"Dimensions of larger box: " <<largest.l <<"x"<<largest.w <<"x"<<largest.h<<endl;

    return 0;
}