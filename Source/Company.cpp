#include "Company.h"
#include <fstream>
#include <sstream>

void Company::readFile (string fileName){
    Employee* temp;
    std::ifstream reader;
    reader.open(fileName, std::ios::in);
    while (!reader.eof()) {
        string buffer;
        getline (reader, buffer);
        string str = buffer;
        stringstream ss(buffer);
        getline (ss, buffer, ':');
        if (buffer == "")
            break;
        if (buffer == "DailyEmployee")
            temp = new DailyEmployee;
        else if (buffer == "HourlyEmployee")
            temp = new HourlyEmployee;
        else if (buffer == "ProductEmployee") 
            temp = new ProductEmployee;
        else if (buffer == "Manager") 
            temp = new Manager;
        getline (reader, buffer);
        temp->input(str + ";" + buffer);
        this->listEmployee.push_back(temp);
    }
    reader.close();
}

void Company::outEmployee (){
    for (int i = 0; i < this->listEmployee.size(); i++)
        this->listEmployee[i]->output();
}

float Company::finalPayment () {
    float sum = 0;
    for (int i = 0; i < this->listEmployee.size(); i++)
        sum += this->listEmployee[i]->calcPayment();
    return sum;
}