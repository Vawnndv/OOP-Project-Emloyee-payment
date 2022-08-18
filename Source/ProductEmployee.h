#include "Employee.h"
#include <string>
using namespace std;

#ifndef _PRODUCTEMPLOYEE_H_
#define _PRODUCTEMPLOYEE_H_
class ProductEmployee : public Employee {
private:
    string name;
    float payment;
    float totalProducts;
public:
    void input (string);
    void output ();
    float calcPayment ();
};

#endif