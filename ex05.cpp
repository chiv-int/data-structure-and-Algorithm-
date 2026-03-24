#include <iostream>
using namespace std;

int findSum() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (num == -1) {
        return 0;
    }
    
    return num + findSum();
}

int main() {
    int total = findSum();
    cout << "Total = " << total;
    return 0;
}