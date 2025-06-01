#include <iostream>
using namespace std;

int main() {
    double pkrAmount;
    int choice;

    cout << "======= Currency Converter (From PKR) =======\n";
    cout << "Enter amount in Pakistani Rupees (PKR): ";
    cin >> pkrAmount;

    cout << "\nConvert to:\n";
    cout << "1. US Dollar (USD)\n";
    cout << "2. Euro (EUR)\n";
    cout << "3. Saudi Riyal (SAR)\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "In USD: $" << pkrAmount / 278.0 << endl;
            break;
        case 2:
            cout << "In EUR: €" << pkrAmount / 296.0 << endl;
            break;
        case 3:
            cout << "In SAR: ?" << pkrAmount / 74.0 << endl;
            break;
        default:
            cout << "Invalid choice! Please enter 1, 2, or 3.\n";
    }

    return 0;
}

