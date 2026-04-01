// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 06 (OOP)

#include<iostream>
#include<string>
using namespace std;

class BankAccount{
private:
    string accountNumber;
    double balance;
    int pin;
public:
    BankAccount(string acc, double bal, int p):accountNumber(acc),balance(bal),pin(p) {}
    void deposit(double amount){
        balance+=amount;
    }

    void withdraw(double amount,int enteredPin){
        if(enteredPin!=pin){
            cout<<"Incorrect PIN entered"<<endl;
            return;
        }

        if (amount > balance) {
            cout << "Insufficient balance." << endl;
            return;
        }
        balance -= amount;
    }

    double getBalance() const{
        return balance;
    }
};
int main(){
    BankAccount account1("123456",1000.0,1234);

    cout<<"Current balance:"<<account1.getBalance()<<endl;
    account1.deposit(500);
    cout<<"After deposit:"<<account1.getBalance()<<endl;

    account1.withdraw(200,1234);
    cout<<"After withdrawal: "<<account1.getBalance()<<endl;

    account1.withdraw(1500,1234);
    cout<<"After insufficient-balance attempt: "<<account1.getBalance()<<endl;

    account1.withdraw(100,1111);
    cout<<"After wrong PIN: "<<account1.getBalance()<<endl;

    return 0;
}