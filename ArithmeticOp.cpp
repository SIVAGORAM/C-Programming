#include<iostream>  // Includes the iostream library for input and output operations

using namespace std; // Allows the use of standard functions and objects (like cout and cin) without the std:: prefix

int main(){
    int a, b;  // Declares two integer variables: a and b

    // Prompt the user to enter a value for variable a
    cout << "Enter a:";
    cin >> a;  // Reads the input value from the user and stores it in variable a

    // Prompt the user to enter a value for variable b
    cout << "Enter b:";
    cin >> b;  // Reads the input value from the user and stores it in variable b

    // Declares variables for storing the results of arithmetic operations
    int addition, subtraction, multiplication, division, modulo;

    // Perform arithmetic operations and store the results in the respective variables
    addition = a + b;  // Adds a and b, and stores the result in addition
    subtraction = a - b;  // Subtracts b from a, and stores the result in subtraction
    multiplication = a * b;  // Multiplies a and b, and stores the result in multiplication
    division = a / b;  // Divides a by b, and stores the result in division
    modulo = a % b;  // Computes the remainder of a divided by b, and stores the result in modulo

    // Output the results of the arithmetic operations
    cout << "Addition:" << addition << endl;
    cout << "Subtraction:" << subtraction << endl;
    cout << "Multiplication:" << multiplication << endl;
    cout << "Division:" << division << endl;
    cout << "Modulo:" << modulo << endl;

    return 0;  // Ends the main function and returns 0, indicating successful execution
}

// Example Outputs:

// If a = 10 and b = 2, the output would be:

// Addition:12
// Subtraction:8
// Multiplication:20
// Division:5
// Modulo:0