#define _USE_MATH_DEFINES     
#include <cmath>
#include <iostream>
using namespace std;

void greet();     
float readRadius();
float findArea(float);
void printResult(float, float);
void signOff();

int main() {
    float radius, area;

    greet();

    radius = readRadius();
    area = findArea(radius);

    printResult(radius, area);
    signOff();

    return 0;
}

void greet() {
    cout << "Welcome to the Area Calculation Program\n"
         << "Enter the radius and I'll find the area of the circle!" << endl;
}


float readRadius() {
    float posInput;

    do {
        cout << "\nPlease enter a positive radius: ";
        cin >> posInput;
    } while (posInput <= 0);

    return posInput;
}


float findArea(float radius) {
    return static_cast<float>(M_PI * radius * radius);
}


void printResult(float radius, float area) {
    cout << "\nYou entered the radius: " << radius
         << "\nThe area of the circle: " << area << endl;
}


void signOff() {
    cout << "\nHave A Great Day!" << endl;
}

