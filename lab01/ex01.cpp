#include <iostream>
using namespace std;
int main() {
    string name, major;
    int age;
    char gender;
    cout << "Please enter your name:";
    getline(cin, name);
    cout << "Please enter your age:";
    cin >> age;
    cout << "Please enter your major:";
    cin >> major;
    cout <<"please enter your gender (M/F):";
    cin >> gender;
    if (gender == 'M' || gender == 'm') {
        cout << "Hello Mr. " << name << "!" << "your age is " << age << ", your major is " << major ;
    } else if (gender == 'F' || gender == 'f') {
        cout << "Hello Ms. " << name << "!" << "your age is " << age << ", your major is " << major ;
    } else {
    cout << "Hello" << name << "!" << "your age is " << age << ", your major is " << major ;
    }
    if (age < 18) {
        cout << "You are a minor." << endl;
    } else if (age >= 18) {
        cout << "You are an adult. you are eligible to vote." << endl;
    } else {
        cout << "You are a senior. you are not eligible to vote." << endl;      
    }
    return 0;
}