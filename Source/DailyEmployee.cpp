#include "DailyEmployee.h"
#include <sstream>
#include <iostream>
using namespace std;

void DailyEmployee::input (string str) {
    // DailyEmployee: John Walker;DailyPayment=100$; TotalDays=28
    string buffer;
    stringstream ss(str);
    getline(ss, buffer, ' ');
    getline(ss, buffer, ';');
    this->name = buffer;
    getline(ss, buffer, '=');
    getline(ss, buffer, '$');
    this->payment = stof(buffer);
    getline(ss, buffer, '=');
    getline(ss, buffer, '\0');
    this->totalDays = stof(buffer);
}

void DailyEmployee::output (){
    cout << "DailyEmployee: " << this->name << endl;
    cout << "      DailyPayment=" << this->payment << "$; TotalDays=" << this->totalDays << endl;
    cout << "      Final payment: " << this->calcPayment() << endl;
}

float DailyEmployee::calcPayment (){
    return this->payment * this->totalDays;
}