#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    void increment() { count++; }
    void reset()     { count = 0; }
    int  get() const { return count; }
};

int main() {
    Counter c[3];

    // perform different operations on each counter
    c[0].increment();
    c[0].increment();
    c[0].increment();          // c[0] = 3

    c[1].increment();          // c[1] = 1

    c[2].increment();
    c[2].increment();          // c[2] = 2

    cout << "Before reset:\n";
    for (int i = 0; i < 3; i++)
        cout << "Counter " << i << " = " << c[i].get() << endl;

    c[0].reset();              // reset only the first counter

    cout << "\nAfter resetting Counter 0:\n";
    for (int i = 0; i < 3; i++)
        cout << "Counter " << i << " = " << c[i].get() << endl;

    return 0;
}