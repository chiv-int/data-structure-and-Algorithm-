#include <iostream>
using namespace std;

int main() {
    int n;
    int* p = &n;

    cout << "Enter a number: ";
    cin >> n;

    *p = *p + 7;

    cout << "After adding 7: " << *p << endl;

    return 0;
}