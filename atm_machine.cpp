#include <iostream>
using namespace std;

class Atm {

private:
    int accountNo;
    int balance;

public:
    void setAccount(int acc, float bal) {
        accountNo = acc;
        balance = bal;
    }

    
    void deposit(float amount) {
        balance += amount;
    }


    void withdraw(float amount) {
        balance -= amount;
    }

    
    void checkBalance() {
        cout << "Account Number: " << accountNo << endl;
        cout << "Current Balance: $" << balance << endl;
    }

};


int main(){
    Atm acc1;

    acc1.setAccount(10001, 5000);
    acc1.deposit(1000);
    acc1.checkBalance();
    acc1.withdraw(500);
    acc1.checkBalance();

    return 0;
}
