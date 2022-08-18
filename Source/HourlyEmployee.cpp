#include "HourlyEmployee.h"
#include <sstream>
#include <iostream>
using namespace std;

void HourlyEmployee::input (string str) {
    // HourlyEmployee: Rachyl Napier;HourlyPayment=15$; TotalHours=1200
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
    this->totalHours = stof(buffer);
}

void HourlyEmployee::output (){
    cout << "HourlyEmployee: " << this->name << endl;
    cout << "      HourlyPayment=" << this->payment << "$; TotalHours=" << this->totalHours << endl;
    cout << "      Final payment: " << this->calcPayment() << endl;
}

float HourlyEmployee::calcPayment (){
    return this->payment * this->totalHours;
}