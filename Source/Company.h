#include "Employee.h"
#include "DailyEmployee.h"
#include "HourlyEmployee.h"
#include "Manager.h"
#include "ProductEmployee.h"
#include <vector>
#include <string>
using namespace std;

#ifndef _COMPANY_H_
#define _COMPANY_H_
class Company {
private:
    vector <Employee*> listEmployee;
public:
    void readFile (string);
    void outEmployee ();
    float finalPayment (); 
};
#endif