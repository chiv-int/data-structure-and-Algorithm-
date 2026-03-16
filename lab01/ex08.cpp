#include <iostream>
#include <cmath>
using namespace std;

// 1. Celsius to Fahrenheit
float celsiusToFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32;
}

// 2. Fahrenheit to Celsius
float fahrenheitToCelsius(float f) {
    return (f - 32) * 5.0 / 9.0;
}

// 3. Quadratic equation roots
void quadratic(float a, float b, float c) {
    float d = b*b - 4*a*c;

    if (d < 0) {
        cout << "No real roots" << endl;
    } else {
        float r1 = (-b + sqrt(d)) / (2*a);
        float r2 = (-b - sqrt(d)) / (2*a);

        cout << "Root1 = " << r1 << endl;
        cout << "Root2 = " << r2 << endl;
    }
}

// 4. BMI calculator
void bmi(float weight, float height) {
    float b = weight / (height * height);

    cout << "BMI = " << b << endl;

    if (b < 18.5)
        cout << "Underweight" << endl;
    else if (b < 25)
        cout << "Normal weight" << endl;
    else if (b < 30)
        cout << "Overweight" << endl;
    else
        cout << "Obese" << endl;
}

// 5. Sum except numbers divisible by 3
int sumNo3(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 3 != 0)
            sum += i;
    }

    return sum;
}

int main() {

    int choice;

    do {

        cout << "\n===== MENU =====\n";
        cout << "1. Celsius to Fahrenheit\n";
        cout << "2. Fahrenheit to Celsius\n";
        cout << "3. Quadratic Equation\n";
        cout << "4. BMI Calculator\n";
        cout << "5. Sum 1 to n (except divisible by 3)\n";
        cout << "0. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            float c;
            cout << "Enter Celsius: ";
            cin >> c;
            cout << "Fahrenheit = " << celsiusToFahrenheit(c) << endl;
        }

        else if (choice == 2) {
            float f;
            cout << "Enter Fahrenheit: ";
            cin >> f;
            cout << "Celsius = " << fahrenheitToCelsius(f) << endl;
        }

        else if (choice == 3) {
            float a,b,c;
            cout << "Enter a b c: ";
            cin >> a >> b >> c;
            quadratic(a,b,c);
        }

        else if (choice == 4) {
            float weight,height;
            cout << "Enter weight (kg): ";
            cin >> weight;
            cout << "Enter height (m): ";
            cin >> height;
            bmi(weight,height);
        }

        else if (choice == 5) {
            int n;
            cout << "Enter n: ";
            cin >> n;
            cout << "Sum = " << sumNo3(n) << endl;
        }

    } while (choice != 0);

    return 0;
}