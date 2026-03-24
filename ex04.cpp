#include <iostream>
using namespace std;

int findsum(int a[], int n) {
    // Base case: if no elements
    if (n == 0) {
        return 0;
    }

    // Recursive case: add last element + sum of remaining
    return a[n - 1] + findsum(a, n - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Sum of elements: " << findsum(arr, n);

    return 0;
}