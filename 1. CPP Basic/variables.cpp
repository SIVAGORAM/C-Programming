#include <iostream> // This is the header for input and output streams.

using namespace std; // Allows us to use 'cout' and 'cin' without the 'std::' prefix.

int main() {
    // Declaring variables of different data types
    int age = 25;           // Integer variable to store age
    float height = 5.9;     // Float variable to store height
    char grade = 'A';       // Char variable to store grade
    bool isGraduated = true; // Boolean variable to store graduation status
    double salary = 60000.50; // Double variable for more precise floating-point numbers
    
    // Outputting the variables
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Graduated: " << (isGraduated ? "Yes" : "No") << endl;
    cout << "Salary: $" << salary << endl;
    
    // Modifying variable values
    age = 26;
    height = 6.1;
    salary = 65000.75;

    // Outputting modified variables
    cout << "\nAfter updating values:" << endl;
    cout << "Updated Age: " << age << endl;
    cout << "Updated Height: " << height << " feet" << endl;
    cout << "Updated Salary: $" << salary << endl;
    
    return 0; // Return 0 to indicate that the program executed successfully.
}
