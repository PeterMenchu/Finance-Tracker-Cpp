// Created by Peter Menchu on 3/8/20.

#include "Finance.h"

Finance::Finance() {
    cout << "\nStarting Peter Menchu's Finance Tracker.\n";
    balance = 0.00;
    opCount = 0;
}
// print account balance
void Finance::printBalance() {
    cout << "Current account balance: $" << balance << endl;
}

void Finance::add(double amount) {
    balance = balance + amount;
    opCount++;
    cout << "Enter a note for this translation: ";
    getline(cin, activityLog[opCount]);
    transLog[opCount] = amount;
    cout << "$" << amount << " added to account, current balance is $" << balance << endl;
}

void Finance::subtract(double amount) {
    balance = balance - amount;
    opCount++;
    cout << "Enter a note for this translation: ";
    getline(cin, activityLog[opCount]);
    transLog[opCount] = amount;
    cout << "$" << amount << " subtracted from account, current balance is $" << balance << endl;
}

void Finance::log() {
    if (opCount < 1){
        cout << "Please load an account with logged activity.\n";
    } else {
        for (int i = 1; i <= opCount; i++) {
            cout << transLog[i] << " ";
            cout << activityLog[i];
            cout << endl;
        }
    }
}

void Finance::save() {
    string outName;
    cout << "Enter save file name: ";
    cin >> outName;
    ofstream fout;
    fout.open(outName);
    fout << balance << endl;
    fout << opCount << endl;
    if (opCount > 0) {
        for (int i = 1; i < opCount; i++) {
            fout << transLog[i] << endl;
            fout << activityLog[i] << endl;
        }
    }
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
    fin >> opCount;
    if (opCount == NULL){
        opCount == 0;
    }
    for (int i = 0; i < opCount; i++){
        fin >> transLog[i];
        fin >> activityLog[i];
    }
    //getline(fin, content);
    fin.close();
    cout << "Account loaded, $" << balance << " is your current balance. Ready for operations.\n";
}
// Peter Menchu 2020