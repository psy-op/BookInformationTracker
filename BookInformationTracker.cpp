#include <iostream>
#include <string>
using namespace std;

// Structure for the year, month, and day
struct DataRec {
    int year;
    int month;
    int day;
};

// Structure for the title, author, publisher, price, and publish date
// Nested DataRec structure is used for the publish date
struct BookRec {
    string title;
    string author;
    string publisher;
    float cost;
    DataRec publishDate;
};

// Function to print the book information in a table
void data(BookRec p[], int size) {
    cout << "Title:\tAuthor:\t Publisher:\tCost:\tDate:\n";
    cout << "------------------------------------------------" << endl;
    for (int i = 0; i < size; i++) {
        cout << p[i].title << "\t"
             << p[i].author << "\t "
             << p[i].publisher << "\t\t"
             << p[i].cost << "\t"
             << p[i].publishDate.year << "/"
             << p[i].publishDate.month << "/"
             << p[i].publishDate.day << endl;
    }
}

// Main function where we define variables and start a loop
// to ask the user for all inputs while saving them to an array
// then calls the print function (data) to print the table
int main() {
    BookRec p[5];
    int count = 0;
    string n;

    for (int i = 0; i < 5; i++) {
        cout << "Enter the book's title: ";
        getline(cin, p[i].title);

        cout << "Enter the book's author: ";
        getline(cin, p[i].author);

        cout << "Enter the book's publisher: ";
        getline(cin, p[i].publisher);

        cout << "Enter the book's cost: ";
        cin >> p[i].cost;

        cout << "Enter the book's publish year: ";
        cin >> p[i].publishDate.year;

        cout << "Enter the book's publish month: ";
        cin >> p[i].publishDate.month;

        cout << "Enter the book's publish day: ";
        cin >> p[i].publishDate.day;
        cin.ignore(1);

        count++;
    }

    // Calls the function to print the book information in a table
    data(p, count);
    return 0;
}
