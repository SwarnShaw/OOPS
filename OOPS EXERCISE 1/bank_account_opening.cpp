#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    
    BankAccount() {
        balance = 0;
    }

    BankAccount(float initialDeposit) {
        balance = initialDeposit;
    }

    void display() {
        cout << "Account Balance: ₹" << balance << endl;
    }
};

int main() {
    
    BankAccount acc1;

    BankAccount acc2(5000);

    cout << "Account without deposit:" << endl;
    acc1.display();

    cout << "Account with initial deposit:" << endl;
    acc2.display();

    return 0;
}
