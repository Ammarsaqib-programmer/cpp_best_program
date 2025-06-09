#include<iostream>
using namespace std;

const int MAX_USERS = 3;

int main() {
    // Sample user data
    int accountNumbers[MAX_USERS] = {1001, 1002, 1003};
    int pins[MAX_USERS] = {1234, 5678, 1111};
    float balances[MAX_USERS] = {5000.0, 3000.0, 10000.0};

    int enteredAccNo, enteredPIN, userIndex = -1;
    int choice;
    float amount;

    // Login
    cout << "===== Welcome to Multi-User ATM =====\n";
    cout << "Enter your Account Number: ";
    cin >> enteredAccNo;
    cout << "Enter your 4-digit PIN: ";
    cin >> enteredPIN;

    // Authentication
    for (int i = 0; i < MAX_USERS; i++) {
        if (enteredAccNo == accountNumbers[i] && enteredPIN == pins[i]) {
            userIndex = i;
            break;
        }
    }

    if (userIndex == -1) {
        cout << "? Invalid account number or PIN. Access denied." << endl;
        return 0;
    }

    // Menu loop
    do {
        cout << "\n----- ATM Menu -----\n";
        cout << "1. Check Balance\n";
        cout << "2. Withdraw\n";
        cout << "3. Deposit\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your balance: Rs. " << balances[userIndex] << endl;
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > balances[userIndex]) {
                    cout << "? Insufficient funds." << endl;
                } else if (amount <= 0) {
                    cout << "? Invalid amount." << endl;
                } else {
                    balances[userIndex] -= amount;
                    cout << "? Withdrawal successful. New balance: Rs. " << balances[userIndex] << endl;
                }
                break;

            case 3:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "? Invalid deposit amount." << endl;
                } else {
                    balances[userIndex] += amount;
                    cout << "? Deposit successful. New balance: Rs. " << balances[userIndex] << endl;
                }
                break;

            case 4:
                cout << "?? Thank you for banking with us!" << endl;
                break;

            default:
                cout << "? Invalid choice. Please enter 1–4." << endl;
        }

    } while (choice != 4);

    return 0;
}

