#include<iostream>  // Includes the iostream library for input and output operations

using namespace std; // Allows the use of standard functions and objects (like cout and cin) without the std:: prefix

int main(){  // The main function where program execution begins

    bool a, b;  // Declares two boolean variables: a and b

    a = true;  // Assigns the value true to the variable a
    b = true;  // Assigns the value true to the variable b

    // First condition: checks if both a and b are true
    // (a && b) evaluates to true && true, which is true (1)
    cout << "A && B ? :" << (a && b) << endl;
    // Output: 1

    // Second condition: checks if either a or b is true
    // (a || b) evaluates to true || true, which is true (1)
    cout << "A || B ? :" << (a || b) << endl;
    // Output: 1

    // Third condition: negates the value of b
    // (!b) evaluates to !true, which is false (0)
    cout << "!B ? :" << (!b) << endl;
    // Output: 0

    return 0;  // Ends the main function and returns 0, indicating successful execution
}
