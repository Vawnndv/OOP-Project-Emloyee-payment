#include "Employee.h"
#include <string>
using namespace std;

#ifndef _HOURLYEMPLOYEE_H_
#define _HOURLYEMPLOYEE_H_
class HourlyEmployee : public Employee {
private:
    string name;
    float payment;
    float totalHours;
public:
    void input (string);
    void output ();
    float calcPayment ();
};

#endif