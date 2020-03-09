// Peter Menchu 2020
// Main implementation of my finance tracker app in C++.
// Follow the instructions in the readme and during use.
#include "Finance.h"
#include <iostream>

int main() {
    Finance account;
    bool inUse = true;
    int operation = 42;
    double input = 0;
    cout << "\n*----------------------------------------------------------*\n";
    cout << "Welcome to Finance Tracker. Select load account data or, if\n"
            "new, select add to account to begin tracking your expenses.\n"
            "You can save to your local file whenever, but also note that\n"
            "if you want to test future expenses you can also exit without\n"
            "saving to avoid overwriting your current account data, or\n"
            "create a new file to save your test data to.\n";
    cout << "Select operation by entering the corresponding number:\n";
    cout << "\t1. View balance\n";
    cout << "\t2. Add to account\n";
    cout << "\t3. Subtract a payment or withdrawal from account\n";
    cout << "\t4. Save current account status and activity log\n";
    cout << "\t5. Load account data (includes balance and previous adds/subtracts.\n";
    cout << "\t6. Exit\n";
    // Run functionality until user exits or enters invalid input.
    do {
        cout << "Enter operation number: ";
        // read user selection
        cin >> operation;
        if (operation == 1){
            account.printBalance();
        } else if (operation == 2){
            cout << "Enter amount to add to account (without commas): $";
            cin >> input;
            account.add(input);
        } else if (operation == 3){
            cout << "Enter amount to subtract from account (without commas): $";
            cin >> input;
            account.subtract(input);
        } else if (operation == 4) {
            account.save();
        } else if (operation == 5){
            account.load();
        } else { // exit
            cout << "Exiting Finance Tracker.\n";
            inUse = false;
        }
    } while (inUse);
    cout << "*----------------------------------------------------------*\n";
    return 0;
}
// Peter Menchu 2020