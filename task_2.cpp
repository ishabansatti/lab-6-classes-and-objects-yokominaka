// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 06 (OOP)

#include<iostream>
#include<string>
using namespace std;

class Book{
public:
    string title;
    string author;
    double price;
};

int main(){
    Book books[3] = {
        {"Atomic habits", "James Clear", 1500},
        {"Al-Ghazali", "allama iqbal", 899},
        {"1984", "George Orwell", 950}
    };
    
    for (Book book : books) {
        cout << "Title: " << book.title << "Author: " << book.author
             << " Price: RS/" << book.price << endl;
    }

    return 0;
}
