#include "Employee.h"
#include <string>
using namespace std;

#ifndef _MANAGER_H_
#define _MANAGER_H_
class Manager : public Employee {
private:
    string name;
    float fixPayment;
    float totalEmployees;
    float paymentPerEmployee;
public:
    void input (string);
    void output ();
    float calcPayment ();
};

#endif