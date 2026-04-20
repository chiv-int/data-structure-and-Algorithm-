#include <iostream>
using namespace std;

int findMin(int a[], int n) {
    if (n == 1) {
        return a[0];
    }

    int minRest = findMin(a, n - 1);

    if (a[n - 1] < minRest) {
        return a[n - 1];
    } else {
        return minRest;
    }
}

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int n = 5;

    cout << "Minimum element: " << findMin(arr, n);

    return 0;
}