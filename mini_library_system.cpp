// Name: Hamza Naseer
// Roll No: 2025-AI-411
// Section: C 
// Lab: 06 (OOP)

#include<iostream>
#include<string>
using namespace std;

struct PublisherInfo{
    string name;
    int year;
};

class Book{
private:
    string title;
    string author;
    double price;
    PublisherInfo publisher;
    bool available;
    static int totalBooks;
public:
    //default constructor:
    Book():title("Unknown"),author("Unknown"),price(0.0), publisher({"Unknown", 0}), available(true) {
        totalBooks++;
    }
    //no publisher:
    Book(string t, string a, double p): title(t),author(a),price(p),publisher({"Unknown",0}), available(true) {
        totalBooks++;
    }
    //with publisher:
    Book(string t, string a, double p, PublisherInfo pub): title(t),author(a),price(p),publisher(pub),available(true) {
        totalBooks++;
    }
    void setPrice(double p){
        if (p<0){
            cout<<"Invalid price!"<<endl;
            return;
        }
        price=p;
    }
    string getTitle() const { return title;}
    string getAuthor() const { return author;}
    double getPrice() const { return price;}
    bool isAvailable()const { return available;}

    void checkout(){
        if( !available){
            cout << title<<" is not available." << endl;
            return;
        }
        available = false;
        cout << title<<" checked out successfully."<<endl;
    }
    void returnBook(){
        if(available){
            cout <<title<<"was not checked out." << endl;
            return;
        }
        available=true;
        cout << title<<" returned successfully."<<endl;
    }
    void displayInfo()const{
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: RS/"<<price<<endl;
        cout<<"Publisher: "<<publisher.name<<"year: "<<publisher.year<<" "<<endl;
        cout<<"Availablity: "<<(available ? "Available":"Checked out")<<endl;
    }
    void static showTotal(){
        cout<<"Total books: "<<totalBooks<<endl;

    }

};
int Book::totalBooks = 0;


Book cheapest(Book a,Book b){
    if(a.getPrice()<b.getPrice()){
        return a;
    }else{
        return b;
    }
}


int main(){
    Book book1={"Atomic habits", "James Clear", 1500, {"Penguin", 2018}};
    Book book2("Al-Ghazali", "allama iqbal", 899);
    Book book3;
    book2.setPrice(-500);
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"------------BOOK DETAILS:---------------"<<endl;
    //display detail of all books
    cout<<"Book 1 details:"<<endl;
    book1.displayInfo();
    cout<<"Book 2 details:"<<endl;
    book2.displayInfo();
    cout<<"Book 3 details:"<<endl;
    book3.displayInfo();

    cout<<" ----------------------------- -----------"<<endl;
    cout<<"checking out book 1..."<<endl;
    book1.checkout();
    cout<<"trying to checkout book 1 again..."<<endl;
    book1.checkout();
    book1.returnBook();
    book1.checkout();

    cout<<" ----------------------------- -----------"<<endl;

    cout<<"Cheaper book between book 1 and book 2:"<<endl;
    Book cheap=cheapest(book1,book2);
    cheap.displayInfo();

    cout<<" -----------------------------------------"<<endl;

    Book::showTotal();

    return 0;

}
 