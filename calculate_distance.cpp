#include<iostream>
using namespace std;

int main() {
    double km, meters, feet, inches, centimeters;

    cout << "===== Distance Converter (From Kilometers) =====" << endl;

    cout << "Enter distance in kilometers: ";
    cin >> km;

    meters = km * 1000;
    feet = km * 3280.84;
    inches = km * 39370.1;
    centimeters = km * 100000;

    cout << "\nEquivalent distances:" << endl;
    cout << "Meters      : " << meters << " m" << endl;
    cout << "Feet        : " << feet << " ft" << endl;
    cout << "Inches      : " << inches << " in" << endl;
    cout << "Centimeters : " << centimeters << " cm" << endl;

    return 0;
}

