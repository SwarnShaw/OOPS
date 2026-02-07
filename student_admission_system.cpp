#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    
    Student() {
        marks = 0;
    }

    Student(int m) {
        marks = m;
    }

    void display() {
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    
    Student s1;

    Student s2(85);

    cout << "Student without marks entered:" << endl;
    s1.display();

    cout << "Student with marks entered:" << endl;
    s2.display();

    return 0;
}
