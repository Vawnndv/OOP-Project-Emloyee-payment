#include "Employee.h"
#include <string>
using namespace std;

#ifndef _DAILYEMPLOYEE_H_
#define _DAILYEMPLOYEE_H_
class DailyEmployee : public Employee {
private:
    string name;
    float payment;
    float totalDays;
public:
    void input (string);
    void output ();
    float calcPayment ();
};

#endif