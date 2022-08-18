#include "Manager.h"
#include <sstream>
#include <iostream>
using namespace std;

void Manager::input (string str) {
    // Manager: Clarinda Hyram;FixedPayment=500$; TotalEmployees=5; PaymentPerEmployee=100$
    string buffer;
    stringstream ss(str);
    getline(ss, buffer, ' ');
    getline(ss, buffer, ';');
    this->name = buffer;
    getline(ss, buffer, '=');
    getline(ss, buffer, '$');
    this->fixPayment = stof(buffer);
    getline(ss, buffer, '=');
    getline(ss, buffer, ';');
    this->totalEmployees = stof(buffer);
    getline(ss, buffer, '=');
    getline(ss, buffer, '$');
    this->paymentPerEmployee = stof(buffer);
}

void Manager::output (){
    cout << "Manager: " << this->name << endl;
    cout << "      FixedPayment=" << this->fixPayment << "$; TotalEmployees=" << this->totalEmployees << "; PaymentPerEmployee=" << this->paymentPerEmployee << endl;
    cout << "      Final payment: " << this->calcPayment() << endl;
}

float Manager::calcPayment (){
    return this->fixPayment + this->totalEmployees * this->paymentPerEmployee;
}