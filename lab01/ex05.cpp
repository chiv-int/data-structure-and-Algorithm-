#include <iostream>
using namespace std;

int main() {

    int minutes, hours, remainMinutes, seconds;

    cout << "Enter minutes: ";
    cin >> minutes;

    hours = minutes / 60;
    remainMinutes = minutes % 60;
    seconds = remainMinutes * 60;

    cout << "Time = " << hours << ":" 
         << remainMinutes << ":" 
         << seconds << endl;

    return 0;
}