#include<iostream>  // Includes the iostream library for input and output operations

using namespace std; // Allows the use of standard functions and objects (like cout and cin) without the std:: prefix

int main(){  // The main function where program execution begins

    int a, b, c;  // Declares three integer variables: a, b, and c

    a = 10;  // Assigns the value 10 to the variable a
    b = 20;  // Assigns the value 20 to the variable b
    c = 30;  // Assigns the value 30 to the variable c

    // First condition: checks if both a is greater than or equal to 10 and b is greater than or equal to 10
    // (a >= 10) evaluates to true (because 10 >= 10 is true)
    // (b >= 10) also evaluates to true (because 20 >= 10 is true)
    // true && true results in true, which is output as 1
    cout << "(a>=10) && (b>=10) ? :" << ((a >= 10) && (b >= 10)) << endl;
    // Output: 1

    // Second condition: checks if a is not equal to 20 and b is greater than or equal to c
    // (a != 20) evaluates to true (because 10 is not equal to 20)
    // (b >= c) evaluates to false (because 20 is not greater than or equal to 30)
    // true && false results in false, which is output as 0
    cout << "(a!=20) && (b>=c) ? :" << ((a != 20) && (b >= c)) << endl;
    // Output: 0

    // Third condition: checks if either a is greater than or equal to 10 or b is greater than or equal to 10
    // (a >= 10) evaluates to true
    // (b >= 10) also evaluates to true
    // true || true results in true, which is output as 1
    cout << "(a>=10) || (b>=10) ? :" << ((a >= 10) || (b >= 10)) << endl;
    // Output: 1

    // Fourth condition: checks if a is not equal to 20 or b is greater than or equal to c
    // (a != 20) evaluates to true
    // (b >= c) evaluates to false
    // true || false results in true, which is output as 1
    cout << "(a!=20) || (b>=c) ? :" << ((a != 20) || (b >= c)) << endl;
    // Output: 1

    // Fifth condition: negates the result of the previous condition
    // (a != 20) || (b >= c) evaluates to true (as explained in the fourth condition)
    // Negating true results in false, which is output as 0
    cout << "!((a!=20) || (b>=c)) ? :" << !((a != 20) || (b >= c)) << endl;
    // Output: 0

    return 0;  // Ends the main function and returns 0, indicating successful execution
}
