#include <iostream>
using namespace std;

class Result {
private:
    int marks;

public:
    
    Result(int m) {
        marks = m;
    }

    Result(const Result &r) {
        marks = r.marks;
        cout << "Backup created" << endl;
    }

    void display() {
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Result r1(92);

    Result r2 = r1;

    r2.display();

    return 0;
}
