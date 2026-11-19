#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex() : real(0), imag(0) {}

    void setData(double r, double i) {
        real = r;
        imag = i;
    }

    void display() const {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex arr[3];

    arr[0].setData(3, 4);
    arr[1].setData(1.5, -2);
    arr[2].setData(0, 7);

    cout << "Complex numbers:\n";
    for (int i = 0; i < 3; i++) {
        cout << "arr[" << i << "] = ";
        arr[i].display();
    }

    return 0;
}