#include <iostream>
using namespace std;

class Mobile {
private:
    int storage;

public:
    
    void setStorage(int s) {
        storage = s;
    }

    void viewStorage() {
        cout << "Phone Storage: " << storage << " GB" << endl;
    }
};

int main() {
    Mobile myPhone;

    myPhone.setStorage(128);

    myPhone.viewStorage();

    return 0;
}
