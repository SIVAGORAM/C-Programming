#include <iostream>
using namespace std;

int main() {
    // Implicit and Explicit Type Conversion

    // Integer to Float (Implicit)
    int a = 5;
    float b = a;  // Implicit conversion
    cout << "Implicit conversion of int " << a << " to float: " << b << endl;

    // Float to Integer (Explicit)
    float c = 5.89;
    int d = (int)c;  // Explicit conversion using casting
    cout << "Explicit conversion of float " << c << " to int: " << d << endl;

    // Char to ASCII (Implicit)
    char ch = 'A';
    cout << "The ASCII value of character " << ch << " is: " << int(ch) << endl;

    return 0;
}

