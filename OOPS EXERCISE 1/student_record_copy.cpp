#include <iostream>
using namespace std;

class Student {
private:
    int marks;

public:
    
    Student(int m) {
        marks = m;
    }

    Student(const Student &s) {
        marks = s.marks;
    }

    void display() {
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    
    Student s1(88);

    Student s2 = s1;

    cout << "Original Student Record:" << endl;
    s1.display();

    cout << "Copied Student Record:" << endl;
    s2.display();

    return 0;
}
