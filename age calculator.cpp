#include <iostream>
using namespace std;

int main() {
    int birthYear, currentYear, age;

    cout << "===== Age Calculator =====" << endl;

    cout << "Enter your birth year: ";
    cin >> birthYear;

    cout << "Enter the current year: ";
    cin >> currentYear;

    if (birthYear > currentYear) {
        cout << "Error: Birth year cannot be greater than current year!" << endl;
    } else {
        age = currentYear - birthYear;
        cout << "Your age is: " << age << " years" << endl;
    }

    return 0;
}

