#include <iostream>
using namespace std;

int main() {

    int n, sum = 0;

    cout << "Enter n (greater than 50): ";
    cin >> n;

    if (n <= 50) {
        cout << "n must be greater than 50" << endl;
        return 0;
    }

    for (int i = 1; i <= n; i++) {

        if (i == 10 || i == 30)
            continue;

        sum += i;
    }

    cout << "Summation = " << sum << endl;

    return 0;
}