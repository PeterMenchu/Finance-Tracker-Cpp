// Created by Peter Menchu on 3/8/20.

#include "Finance.h"

Finance::Finance() {
    cout << "\nStarting Peter Menchu's Finance Tracker.\n";
    balance = 0.00;
}
// print account balance
void Finance::printBalance() {
    cout << "Current account balance: $" << balance << endl;
}

void Finance::add(double amount) {
    balance = balance + amount;
    cout << "$" << amount << " added to account, current balance is $" << balance << endl;
}

void Finance::subtract(double amount) {
    balance = balance - amount;
    cout << "$" << amount << " subtracted from account, current balance is $" << balance << endl;
}

void Finance::save() {
    cout << "In Progress.\n";
}

void Finance::load() {
    cout << "In Progress.\n";
}
// Peter Menchu 2020