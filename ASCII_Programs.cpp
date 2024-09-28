//Example 1: Display ASCII Value of a Character
// Code:-01

#include<iostream>

using namespace std;

int main() {
    char ch;

    // Asking the user to enter a character
    cout << "Enter a character: ";
    cin >> ch;

    // Display the ASCII value of the entered character
    cout << "The ASCII value of " << ch << " is: " << int(ch) << endl;

    return 0;
}


// Code:- 02 
//Example 2: Display ASCII Values of All Characters

#include<iostream>

using namespace std;

int main() {
    // Looping through all ASCII values from 0 to 127
    for (int i = 0; i <= 127; i++) {
        cout << "ASCII value of " << char(i) << " is: " << i << endl;
    }

    return 0;
}


// Code:-03
// Example 3: Convert Uppercase to Lowercase Using ASCII Values

#include<iostream>

using namespace std;

int main() {
    char uppercase, lowercase;

    // Asking the user to enter an uppercase letter
    cout << "Enter an uppercase letter: ";
    cin >> uppercase;

    // Convert uppercase to lowercase using ASCII values
    lowercase = uppercase + 32;  // ASCII difference between uppercase and lowercase is 32

    cout << "The lowercase letter is: " << lowercase << endl;

    return 0;
}

