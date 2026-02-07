#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNo;
    float balance;

public:
    
    void setAccount(int acc, float bal) {
        accountNo = acc;
        balance = bal;
    }

    
    void deposit(float amount) {
        balance += amount;
    }

    
    void display() {
        cout << "Account Number: " << accountNo << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc1;

    
    acc1.setAccount(12345, 5000);

    acc1.deposit(1500);
    acc1.deposit(5000);

    acc1.display();

    return 0;
}
