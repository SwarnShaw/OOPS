#include <iostream>
using namespace std;

class Mobile {
private:
    int storage;

public:
    
    Mobile() {
        storage = 64;
    }

    Mobile(int s) {
        storage = s;
    }

    void display() {
        cout << "Phone Storage: " << storage << " GB" << endl;
    }
};

int main() {

    Mobile phone1;

    Mobile phone2(128);

    cout << "Default Phone Configuration:" << endl;
    phone1.display();

    cout << "Custom Phone Configuration:" << endl;
    phone2.display();

    return 0;
}
