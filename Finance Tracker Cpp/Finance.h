// Created by Peter Menchu on 3/8/20.
//
#ifndef FINANCE_TRACKER_CPP_FINANCE_H
#define FINANCE_TRACKER_CPP_FINANCE_H
#include <iostream>
#include <fstream>

using namespace std;

class Finance {
    private:
        double balance;
    public:
        Finance();
        void printBalance();
        void add(double amount);
        void subtract(double amount);
        void save();
        void load();
};


#endif //FINANCE_TRACKER_CPP_FINANCE_H
// Peter Menchu 2020