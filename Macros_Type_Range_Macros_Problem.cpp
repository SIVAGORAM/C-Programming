#include <iostream>
#include <climits>  // For type range macros
using namespace std;

// Define macro for calculating square of a number
#define SQUARE(x) ((x) * (x))

int main() {
    // Using the SQUARE macro
    int num = 5;
    cout << "Square of " << num << " is: " << SQUARE(num) << endl;

    // Using type range macros from <climits>
    cout << "The maximum value of int: " << INT_MAX << endl;
    cout << "The minimum value of int: " << INT_MIN << endl;
    cout << "The maximum value of char: " << CHAR_MAX << endl;
    cout << "The minimum value of char: " << CHAR_MIN << endl;

    return 0;
}

