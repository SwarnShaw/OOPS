#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    float salary;

public:
    
    Employee(int empId, float empSalary) {
        id = empId;
        salary = empSalary;
    }

    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    
    Employee e1(101, 45000);
    Employee e2(102, 52000);

    e1.display();
    e2.display();

    return 0;
}
