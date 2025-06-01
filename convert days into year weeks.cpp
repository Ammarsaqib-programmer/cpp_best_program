#include <iostream>
using namespace std;

int main() {
    int totalDays, years, weeks, days;

    cout << "===== Days to Years Converter =====" << endl;
    cout << "Enter number of days: ";
    cin >> totalDays;
    years = totalDays / 365;
    int remainingDays = totalDays % 365;
    weeks = remainingDays / 7;
    days = remainingDays % 7;
    cout << "That equals: " << years << " year(s), "
         << weeks << " week(s), and " << days << " day(s)." << endl;

    return 0;
}

