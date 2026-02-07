#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float breadth;

public:
    
    void setDimensions(float l, float b) {
        length = l;
        breadth = b;
    }

    void calculateArea() {
        float area = length * breadth;
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area of Rectangle: " << area << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    Rectangle r1, r2;

    r1.setDimensions(5, 4);
    r2.setDimensions(10, 6);

    r1.calculateArea();
    r2.calculateArea();

    return 0;
}
