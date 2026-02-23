#include <iostream>
using namespace std;

class Book {
private:
    int bookId;
    float price;

public:
    
    Book(int id, float p) {
        bookId = id;
        price = p;
    }

    void display() {
        cout << "Book ID: " << bookId << endl;
        cout << "Price: $" << price << endl;
        cout << "--------------------" << endl;
    }
};

int main() {
    
    Book b1(201, 499.50);
    Book b2(202, 299.00);

    b1.display();
    b2.display();

    return 0;
}
