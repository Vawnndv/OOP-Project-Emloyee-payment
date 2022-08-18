#include "ProductEmployee.h"
#include <sstream>
#include <iostream>
using namespace std;

void ProductEmployee::input (string str) {
    // ProductEmployee: Romaine Donna;PaymentPerProduct=10$; TotalProducts=180
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
    this->totalProducts = stof(buffer);
}

void ProductEmployee::output (){
    cout << "ProductEmployee: " << this->name << endl;
    cout << "      PaymentPerProduct=" << this->payment << "$; TotalProducts=" << this->totalProducts << endl;
    cout << "      Final payment: " << this->calcPayment() << endl;
}

float ProductEmployee::calcPayment (){
    return this->payment * this->totalProducts;
}