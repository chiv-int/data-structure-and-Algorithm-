#include <iostream>
using namespace std;

int main() {

    string name;
    char gender;
    float salary, tax = 0;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your gender (M/F): ";
    cin >> gender;

    cout << "Enter your salary: ";
    cin >> salary;

    if (gender == 'M' || gender == 'm') {

        if (salary > 1000)
            tax = salary * 0.095;
        else if (salary >= 500)
            tax = salary * 0.07;
        else if (salary >= 300)
            tax = salary * 0.05;
        else
            tax = 0;

    }
    else if (gender == 'F' || gender == 'f') {

        if (salary > 1000)
            tax = salary * 0.08;
        else if (salary >= 500)
            tax = salary * 0.065;
        else if (salary >= 300)
            tax = salary * 0.035;
        else
            tax = 0;

    }

    cout << "Name: " << name << endl;
    cout << "Salary: $" << salary << endl;
    cout << "Tax to pay: $" << tax << endl;

    return 0;
}