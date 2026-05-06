#include <iostream>
using namespace std;

struct Student {
    int id;
    string name;
    int year;
    string program;
    Student* next;
};

struct ListStudent {
    int n;
    Student* head;
    Student* tail;
};

ListStudent* createEmptyList() {
    ListStudent* ls = new ListStudent;
    ls->n = 0;
    ls->head = nullptr;
    ls->tail = nullptr;
    return ls;
}

void add(Student s, ListStudent* ls) {
    Student* e = new Student;
    e->id = s.id;
    e->name = s.name;
    e->year = s.year;
    e->program = s.program;
    e->next = nullptr;

    if (ls->n == 0) {
        ls->head = e;
        ls->tail = e;
    } else {
        ls->tail->next = e;
        ls->tail = e;
    }
    ls->n++;
}

int main() {
    ListStudent* ls = createEmptyList();

    add({1, "in",  2, "CS"}, ls);
    add({2, "lee",    1, "IT"}, ls);
    add({3, "jae",3, "CS"}, ls);
    add({4, "thera",  2, "IT"}, ls);
    add({5, "chiv",    1, "CS"}, ls);

    // Print all students
    Student* cur = ls->head;
    while (cur != nullptr) {
        cout << cur->id << " " << cur->name << " Year:" << cur->year << " " << cur->program << endl;
        cur = cur->next;
    }

    return 0;
}