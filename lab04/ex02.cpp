#include <iostream>
#include <string>
using namespace std;

struct Student {
    string id;             
    string name;        
    int year;           
    string program;     
    Student* next;     
};

struct ListStudent {
    Student* head;      
    Student* tail;     
    Student* pointer;   
};

int main() {

    cout << "Exercise 2: Student structure definitions completed." << endl;
    cout << "Student fields: id, name, year, program, next (pointer)" << endl;
    cout << "ListStudent fields: head, tail, pointer" << endl;
    return 0;
}