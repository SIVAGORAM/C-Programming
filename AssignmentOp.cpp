#include<iostream>

using namespace std;

int main() {
    int a, b;  // Declare two integer variables a and b

    // Prompt the user to enter the value of a
    cout << "Enter a: ";
    cin >> a;  // Read the input value and store it in variable a

    // Prompt the user to enter the value of b
    cout << "Enter b: ";
    cin >> b;  // Read the input value and store it in variable b

    // Add and assign: Adds the value of b to a and stores the result back in a
    a += b;  // Equivalent to a = a + b
    cout << "After a += b, a = " << a << endl;  // Print the updated value of a

    // Subtract and assign: Subtracts the value of b from a and stores the result back in a
    a -= b;  // Equivalent to a = a - b
    cout << "After a -= b, a = " << a << endl;  // Print the updated value of a

    // Multiply and assign: Multiplies the value of b with a and stores the result back in a
    a *= b;  // Equivalent to a = a * b
    cout << "After a *= b, a = " << a << endl;  // Print the updated value of a

    // Divide and assign: Divides a by b and stores the result back in a
    a /= b;  // Equivalent to a = a / b
    cout << "After a /= b, a = " << a << endl;  // Print the updated value of a

    // Modulus and assign: Takes the remainder of a divided by b and stores it back in a
    a %= b;  // Equivalent to a = a % b (only works with integers)
    cout << "After a %= b, a = " << a << endl;  // Print the updated value of a

    return 0;  // End the program
}
