#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double TAXRATE = 4.225 / 100,
                 LESS_ONE_LB = 10,
                 LESS_FIVE_LB = 7,
                 LESS_EIGHT_LB = 5,
                 LESS_TEN_LB = 3,
                 LESS_TWENTY_LB = 2,
                 ABOVE_TWENTY = 1;

    double price, weight, tax, shipping, totalCost;

    cout << "Calculate the total cost of an online purchase" << endl;

    cout << "\nEnter the item's price: ";
    cin >> price;
    if (price < 0) {
        cout << "Invalid input: price must be non-negative.\n";
        return 1;
    }

    cout << "Enter the item's weight: ";
    cin >> weight;
    if (weight < 0) {
        cout << "Invalid input: weight must be non-negative.\n";
        return 1;
    }

    if (weight < 1)
        shipping = LESS_ONE_LB * weight;
    else if (weight < 5)
        shipping = LESS_FIVE_LB * weight;
    else if (weight < 8)
        shipping = LESS_EIGHT_LB * weight;
    else if (weight < 10)
        shipping = LESS_TEN_LB * weight;
    else if (weight < 20)
        shipping = LESS_TWENTY_LB * weight;
    else
        shipping = ABOVE_TWENTY * weight;

    tax = price * TAXRATE;
    totalCost = price + tax + shipping;

    cout << fixed << setprecision(2);
    cout << "\nItem Price:   $" << price << endl;
    cout << "Sales Tax:    $" << tax << endl;
    cout << "Shipping:     $" << shipping << endl;
    cout << "-----------------------" << endl;
    cout << "Total Cost:   $" << totalCost << endl;

    return 0;
}

