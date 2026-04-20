#include <iostream>
#include <cmath>
using namespace std;

void solveEquation(int a, int b, int c, float *x1, float *x2, float *delta) {
    *delta = b*b - 4*a*c;

    if (*delta > 0) {
        *x1 = (-b + sqrt(*delta)) / (2*a);
        *x2 = (-b - sqrt(*delta)) / (2*a);
        cout << "Two solutions: x1 = " << *x1 << ", x2 = " << *x2 << endl;
    } else if (*delta == 0) {
        *x1 = *x2 = -b / (2.0*a);
        cout << "One solution: x1 = x2 = " << *x1 << endl;
    } else {
        cout << "No real solution (delta < 0)" << endl;
    }
}

int main() {
    int a, b, c;
    float x1, x2, delta;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    solveEquation(a, b, c, &x1, &x2, &delta);
    cout << "Delta = " << delta << endl;

    return 0;
}