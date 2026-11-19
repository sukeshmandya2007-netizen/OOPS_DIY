#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle() : length(0), width(0) {}

    void setLength(double l) {
        if (l < 0) {
            cout << "Error: length cannot be negative. Value not changed.\n";
            return;
        }
        length = l;
    }

    void setWidth(double w) {
        if (w < 0) {
            cout << "Error: width cannot be negative. Value not changed.\n";
            return;
        }
        width = w;
    }

    double area() const {
        return length * width;
    }

    double perimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle r;

    r.setLength(10);
    r.setWidth(5);
    cout << "Area      : " << r.area() << endl;
    cout << "Perimeter : " << r.perimeter() << endl;

    cout << "\nTrying a negative value:\n";
    r.setLength(-4);                      // rejected
    cout << "Area (unchanged): " << r.area() << endl;

    return 0;
}