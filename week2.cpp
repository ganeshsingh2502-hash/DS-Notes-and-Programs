#include <iostream>
#include <string>
using namespace std;

// Overloaded functions
int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

// Function Template
template <class T>
void swapValues(T &x, T &y) {
    T temp = x;
    x = y;
    y = temp;
}

int main() {
    int i1 = 10, i2 = 20;
    float f1 = 2.5, f2 = 4.5;
    string s1 = "Hello", s2 = "World";

    cout << "Addition of integers: " << add(i1, i2) << endl;
    cout << "Addition of floats: " << add(f1, f2) << endl;

    cout << "\nBefore swapping integers: ";
    cout << i1 << " " << i2 << endl;
    swapValues(i1, i2);
    cout << "After swapping integers: ";
    cout << i1 << " " << i2 << endl;

    cout << "\nBefore swapping floats: ";
    cout << f1 << " " << f2 << endl;
    swapValues(f1, f2);
    cout << "After swapping floats: ";
    cout << f1 << " " << f2 << endl;

    cout << "\nBefore swapping strings: ";
    cout << s1 << " " << s2 << endl;
    swapValues(s1, s2);
    cout << "After swapping strings: ";
    cout << s1 << " " << s2 << endl;

    return 0;
}
