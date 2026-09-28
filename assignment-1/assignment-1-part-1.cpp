#include <iostream>
using namespace std;

int main() {
    int id1, id2, id3;
    string t1, t2, t3;

    cout << "Enter Book-1 ID: ";
    cin >> id1;
    cout << "Enter Book-1 Title: ";
    cin >> t1;

    cout << "Enter Book-2 ID: ";
    cin >> id2;
    cout << "Enter Book-2 Title: ";
    cin >> t2;

    cout << "Enter Book-3 ID: ";
    cin >> id3;
    cout << "Enter Book-3 Title: ";
    cin >> t3;

    cout << "\n---LIBRARY BOOKS---";
    cout << "\nBook ID: " << id1;
    cout << "\nBook Title: " << t1;
    cout << "\n\nBook ID: " << id2;
    cout << "\nBook Title: " << t2;
    cout << "\n\nBook ID: " << id3;
    cout << "\nBook Title: " << t3;

    return 0;
}