#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    float marks;

public:
    
    void setValues(int r, float m) {
        rollNo = r;
        marks = m;
    }

    
    void display() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "-------------------" << endl;
    }
};

int main() {
    Student s1, s2;

    
    s1.setValues(101, 85.5);
    s2.setValues(102, 92.0);

    
    cout << "Student Details:\n";
    s1.display();
    s2.display();

    return 0;
}
