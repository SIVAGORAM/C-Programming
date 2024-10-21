#include<iostream>  // Includes the iostream library for input and output operations

using namespace std; // Allows the use of standard functions and objects (like cout and cin) without the std:: prefix

int main(){
    int a, b;  // Declares two integer variables: a and b
    
    cout << "Enter a:";  // Prompts the user to enter a value for variable a
    cin >> a;  // Reads the input value from the user and stores it in variable a

    cout << "Enter b:";  // Prompts the user to enter a value for variable b
    cin >> b;  // Reads the input value from the user and stores it in variable b

    // Compares a and b for equality
    // (a == b) returns true (1) if a is equal to b, otherwise returns false (0)
    cout << "Is A Equal to B ? :" << (a == b) << endl;

    // Compares a and b for inequality
    // (a != b) returns true (1) if a is not equal to b, otherwise returns false (0)
    cout << "Is A not equals to B ? :" << (a != b) << endl;

    // Checks if a is greater than b
    // (a > b) returns true (1) if a is greater than b, otherwise returns false (0)
    cout << "Is A GreaterThan B ? : " << (a > b) << endl;

    // Checks if a is less than b
    // (a < b) returns true (1) if a is less than b, otherwise returns false (0)
    cout << "Is A Lessthan B ? : " << (a < b) << endl;

    // Checks if a is less than or equal to b
    // (a <= b) returns true (1) if a is less than or equal to b, otherwise returns false (0)
    cout << "Is A Lessthan or Equal to B ? :" << (a <= b) << endl;

    // Checks if a is greater than or equal to b
    // (a >= b) returns true (1) if a is greater than or equal to b, otherwise returns false (0)
    cout << "Is A Greater than or equal to B ? : " << (a >= b) << endl;

    // No return statement at the end, but since main returns an int, it's best to include return 0;
    return 0;  // Ends the main function and returns 0, indicating successful execution
}

// Example Outputs:
// If a = 5 and b = 10, the output would be:

// Is A Equal to B ? :0
// Is A not equals to B ? :1
// Is A GreaterThan B ? : 0
// Is A Lessthan B ? : 1
// Is A Lessthan or Equal to B ? :1
// Is A Greater than or equal to B ? : 0