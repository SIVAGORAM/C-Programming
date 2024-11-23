#include<iostream>

using namespace std;

int main() {

    int age;  // Declare an integer variable to store the age of the person

    // Prompt the user to enter the person's age
    cout << "Enter the person's Age:- " << endl;
    cin >> age;  // Read the input age and store it in the variable 'age'

    string isEligibleToVote;  // Declare a string variable to store the eligibility message
    char isATeenager;         // Declare a char variable to store whether the person is a teenager ('Y' or 'N')

    // Check if the person is eligible to vote
    // If age is 18 or older, set isEligibleToVote to "The person is Eligible to vote"
    // Otherwise, set it to "The Person is not Eligible to Vote"
    isEligibleToVote = (age >= 18) ? "The person is Eligible to vote" : "The Person is not Eligible to Vote";

    // Check if the person is a teenager
    // If age is between 13 and 17 (inclusive), set isATeenager to 'Y'
    // Otherwise, set isATeenager to 'N'
    isATeenager = (age >= 13 && age < 18) ? 'Y' : 'N';
    
    // Output the eligibility message to the console
    cout << isEligibleToVote << endl;

    // Output whether the person is a teenager ('Y' or 'N')
    cout << isATeenager << endl;

    return 0;  // End the program
}
