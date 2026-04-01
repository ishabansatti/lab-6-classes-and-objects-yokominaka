// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 06 (OOP)

#include<iostream>
#include<string>
using namespace std;

class Temperature{
private:
    double celsius;
public:
    Temperature(double c):celsius(c){}

    void setCelsius(double c){
        if (c<-273.15) {
            cout << "invalid temperature"<<endl;
            return;
        }
        celsius=c;
    }

    double getCelsius()const{
        return celsius;
    }

    double getFahrenheit() const{
        return celsius *9.0/5.0+32;
    }
    double getKelvin()const{
        return celsius +273.15;
    }
};

int main(){
    Temperature temp(25.0);
    cout<<"Temperature in Celsius: " <<temp.getCelsius()<<"C"<<endl;
    cout<<"Temperature in Fahrenheit: " <<temp.getFahrenheit()<<"f"<<endl;
    cout<<"Temperature in Kelvin: " <<temp.getKelvin() <<" K"<<endl;

    temp.setCelsius(-300);
    cout << "After setting invalid temperature:" << endl;
    cout << "Temperature in Celsius: " << temp.getCelsius() << " C" << endl;
    cout << "Temperature in Fahrenheit: " << temp.getFahrenheit() << " F" << endl;
    cout << "Temperature in Kelvin: " << temp.getKelvin() << " K" << endl;

    return 0;
}
