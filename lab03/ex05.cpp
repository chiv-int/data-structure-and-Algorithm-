#include <iostream>
using namespace std;

void findMaxMin(int* arr, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < 7; i++) {
        if (*(arr + i) > *max) *max = *(arr + i);
        if (*(arr + i) < *min) *min = *(arr + i);
    }
}

int main() {
    int arr[7];

    cout << "Enter 7 integers: " << endl;
    for (int i = 0; i < 7; i++) {
        cout << "Number " << i+1 << ": ";
        cin >> arr[i];
    }

    int max, min;
    findMaxMin(arr, &max, &min);

    cout << "\nMax = " << max << endl;
    cout << "Min = " << min << endl;

    return 0;
}