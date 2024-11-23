#include<iostream>

using namespace std;

int main() {
    int a, b;

    // Prompt the user to enter the first integer 'a'
    cout << "Enter a:";
    cin >> a;

    // Prompt the user to enter the second integer 'b'
    cout << "Enter b:";
    cin >> b;

    // Perform bitwise OR operation on 'a' and 'b'
    cout << "a | b ? :" << (a | b) << endl;
    // Sample Input: a = 5 (0101 in binary), b = 3 (0011 in binary)
    // Output: 7 (0111 in binary)

    // Perform bitwise AND operation on 'a' and 'b'
    cout << "a & b ? :" << (a & b) << endl;
    // Sample Input: a = 5 (0101 in binary), b = 3 (0011 in binary)
    // Output: 1 (0001 in binary)

    // Perform bitwise XOR operation on 'a' and 'b'
    cout << "a ^ b ? :" << (a ^ b) << endl;
    // Sample Input: a = 5 (0101 in binary), b = 3 (0011 in binary)
    // Output: 6 (0110 in binary)

    // Perform bitwise NOT operation on 'a'
    cout << " ~a ? :" << (~a) << endl;
    // Sample Input: a = 5 (0101 in binary)
    // Output: -6 (Inverting bits: 1010 in binary, which is -6 in 2's complement form)

    // Perform left shift operation on 'a' by 2 positions
    cout << "a<<2 ? :" << (a << 2) << endl;
    // Sample Input: a = 5 (0101 in binary)
    // Output: 20 (10100 in binary, which is 20 in decimal)

    // Perform right shift operation on 'a' by 2 positions
    cout << "a>>2 ? :" << (a >> 2) << endl;
    // Sample Input: a = 5 (0101 in binary)
    // Output: 1 (0001 in binary, which is 1 in decimal)

    return 0;
}
