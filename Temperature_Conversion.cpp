#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    // Convert Celsius to Fahrenheit
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9/5) + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    // Convert Fahrenheit to Celsius
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5/9;
    cout << "Temperature in Celsius: " << celsius << endl;

    return 0;
}

