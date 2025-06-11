#include <iomanip>
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    const double PIZZA = 15.50,
                 SODA = 2.00,
                 CHICKEN_NUGGETS = 7.00,
                 BREADSTICKS = 9.75;

    double total = 0;
    int numItems = 0;
    char itemLetter;

    cout << "=====================================================\n"
         << "\t\tWelcome to Pizza Palace\n"
         << "=====================================================\n";

    cout << fixed << setprecision(2);

    do {
        cout << "\n-----------------------------------------------------\n"
             << "\tA\tPizza" << setw(26) << PIZZA
             << "\n\tB\tSoda" << setw(27) << SODA
             << "\n\tC\tChicken Nuggets" << setw(16) << CHICKEN_NUGGETS
             << "\n\tD\tBreadsticks" << setw(20) << BREADSTICKS
             << "\n\tE\tExit\n";

        cout << "\nPlease enter the next menu item Letter: ";
        cin >> itemLetter;
        itemLetter = toupper(itemLetter);

        switch (itemLetter) {
            case 'A':
                total += PIZZA;
                numItems++;
                break;
            case 'B':
                total += SODA;
                numItems++;
                break;
            case 'C':
                total += CHICKEN_NUGGETS;
                numItems++;
                break;
            case 'D':
                total += BREADSTICKS;
                numItems++;
                break;
            case 'E':
                break;
            default:
                cerr << "\nPlease pick a valid option\n";
        }

        if (itemLetter != 'E') {
            cout << "\nNumber of items: " << numItems << endl;
            cout << "Total: $" << total << endl;
        }

    } while (itemLetter != 'E');

    cout << "\nThank you! Enjoy!" << endl;

    return 0;
}

