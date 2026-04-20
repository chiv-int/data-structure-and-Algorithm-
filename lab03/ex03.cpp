#include <iostream>
using namespace std;

void exchange(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    float x, y;

    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    cout << "\nBefore: x = " << x << ", y = " << y << endl;

    exchange(&x, &y);  

    cout << "After:  x = " << x << ", y = " << y << endl;

    return 0;
}