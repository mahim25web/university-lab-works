#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    double price;
    int pages;

  
    Book(string t, string a, double p, int pg) {
        title = t;
        author = a;
        price = p;
        pages = pg;
    }

    void display_info() {
        cout << endl << "Author " << author << endl;
    }

    void get_title() {
        cout << "Title is " << title << endl;
    }

    void get_price() {
        cout << "Price is " << price << endl;
    }

   
    void set_price(double newPrice) {
        price = newPrice;
        cout << "Changed price is " << price << endl;
    }
};

int main() {
   
    Book b1("Action", "Thomas Shelby", 600, 300);
    b1.display_info();
    b1.get_title();
    b1.get_price();
    
 
    b1.set_price(550.50); 

    Book b2("Romance", "John cena", 300, 600);
    b2.display_info();
    b2.get_title();
    b2.get_price();

    b2.set_price(250.50); 

    Book b3("Comedy", "Newton", 987, 400);
    b3.display_info();
    b3.get_title();
    b3.get_price();

    b3.set_price(450.50); 
    return 0;
}