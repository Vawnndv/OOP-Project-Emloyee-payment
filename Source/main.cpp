#include "Company.h"
#include <iostream>
using namespace std;
#define FILE_NAME "November2021.txt"

int main () {
    Company US;
    US.readFile(FILE_NAME);
    US.outEmployee();
    cout << "THE FINAL PAYMENT FOR ALL EMPLOYEE: " << US.finalPayment() << endl;
    system("pause");
    return 0;
}