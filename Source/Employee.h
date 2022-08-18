#include <string>
using namespace std;

#ifndef _EMPLOYEE_H_
#define _EMPLOYEE_H_
class Employee {
public:
    virtual void input (string) = 0;
    virtual void output () = 0;
    virtual float calcPayment () = 0;
};
#endif