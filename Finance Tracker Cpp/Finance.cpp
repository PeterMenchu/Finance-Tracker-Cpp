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
    string outName;
    cout << "Enter save file name: ";
    cin >> outName;
    ofstream fout;
    fout.open(outName);
    fout << balance;
    fout.close();
    cout << "Account saved.\n";
}

void Finance::load() {
    string inName;
    cout << "Enter input file name: ";
    cin >> inName;
    ifstream fin;
    fin.open(inName);
    fin >> balance;
    //getline(fin, content);
    fin.close();
    cout << "Account loaded, $" << balance << " is your current balance. Ready for operations.\n";
}
// Peter Menchu 2020