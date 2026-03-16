#include <iostream>
using namespace std;

struct Book {
    int id;
    string isbn;
    string title;
    int year;
    string author;
    float price;
};

void displayBookByISBN(Book books[], int size, string isbn) {
    for(int i = 0; i < size; i++) {
        if(books[i].isbn == isbn) {
            cout << "ID: " << books[i].id << endl;
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "Year: " << books[i].year << endl;
            cout << "Price: $" << books[i].price << endl;
        }
    }
}

void displayAllBooks(Book books[], int size) {
    for(int i = 0; i < size; i++) {
        cout << "\nBook " << i+1 << endl;
        cout << books[i].id << " "
             << books[i].title << " "
             << books[i].isbn << " "
             << books[i].price << endl;
    }
}

int main() {

    Book books[5] = {
        {1,"111","C++",2020,"John",20},
        {2,"222","Java",2019,"Anna",25},
        {3,"333","Python",2021,"Mike",30},
        {4,"444","Database",2018,"Tom",22},
        {5,"555","Algorithms",2022,"Sara",28}
    };

    cout << "All Books:\n";
    displayAllBooks(books,5);

    cout << "\nSearch Book ISBN 333:\n";
    displayBookByISBN(books,5,"333");

    return 0;
}