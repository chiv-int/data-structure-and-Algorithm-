#include <iostream>
using namespace std;

int main() {
    float arr[7];
    float *p = arr; 

    // Input
    cout << "Enter 7 float numbers:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Number " << i+1 << ": ";
        cin >> *(p + i); 
    }

   
    float *q = arr;
    cout << "\nAll numbers: ";
    for (int i = 0; i < 7; i++) {
        cout << *(q + i) << " ";
    }
    cout << endl;

    float sum = 0, product = 1;
    for (int i = 0; i < 7; i++) {
        sum     += *(p + i);
        product *= *(p + i);
    }

    cout << "Sum        = " << sum << endl;
    cout << "Product    = " << product << endl;

    return 0;
}