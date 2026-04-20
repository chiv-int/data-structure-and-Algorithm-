#include <iostream>
using namespace std;

int main() {

    int n1 = 7, n2 = 3, n3 = 15;

    int* p1 = &n1;
    int* p2 = &n2;
    int* p3 = &n3;

    cout << "Address of n1: " << p1 << ", Value: " << *p1 << endl;
    cout << "Address of n2: " << p2 << ", Value: " << *p2 << endl;
    cout << "Address of n3: " << p3 << ", Value: " << *p3 << endl;

    *p3 = *p1 + *p2;

    cout << "\nAfter update:" << endl;
    cout << "Value of n3 = " << *p3 << endl;

    return 0;
}