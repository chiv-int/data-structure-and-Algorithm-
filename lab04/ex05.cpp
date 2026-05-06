#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct NumList {
    int n;
    Node* head;
    Node* tail;
};

NumList* createNumList() {
    NumList* ls = new NumList;
    ls->n = 0;
    ls->head = nullptr;
    ls->tail = nullptr;
    return ls;
}

void addNum(int val, NumList* ls) {
    Node* e = new Node;
    e->data = val;
    e->next = nullptr;
    if (ls->n == 0) { ls->head = ls->tail = e; }
    else { ls->tail->next = e; ls->tail = e; }
    ls->n++;
}

void displayNum(NumList* ls) {
    cout << "All data in the list are: ";
    Node* cur = ls->head;
    while (cur != nullptr) {
        cout << cur->data;
        if (cur->next) cout << "  ";
        cur = cur->next;
    }
    cout << "." << endl;
}

int sumNum(NumList* ls) {
    int sum = 0;
    Node* cur = ls->head;
    while (cur != nullptr) {
        sum += cur->data;
        cur = cur->next;
    }
    return sum;
}

int main() {
    cout << "*** A program to store number as many as possible: ***" << endl;

    NumList* ls = createNumList();
    int zeroCount = 0;

    while (zeroCount < 2) {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        if (num == 0) {
            zeroCount++;
            if (zeroCount == 1)
                cout << "\tYou have entered the number 0 once. Only 1 more left. We will quit the program." << endl;
            else
                cout << "\tYou have entered the number 0 twice so far. The program is going to stop now." << endl;
        } else {
            addNum(num, ls);
        }
    }

    cout << endl;
    displayNum(ls);
    cout << "Summation of all numbers is: " << sumNum(ls) << endl;

    return 0;
}