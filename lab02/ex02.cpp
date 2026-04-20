#include <iostream>
using namespace std;

int sumOdd(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n % 2 != 0) {
        return n + sumOdd(n - 1);
    } else {
        return sumOdd(n - 1);
    }
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    cout << "Sum of odd numbers from 1 to " << n << " is: " << sumOdd(n) << endl;
    return 0;
}