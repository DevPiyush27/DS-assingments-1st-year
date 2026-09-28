#include <iostream>
using namespace std;

int main() {
    int books[5];
    int temp;

    // Input Book IDs
    cout << "Enter ID of 5  Books:\n";
    for (int i = 0; i < 5; i++) {
        cin >> books[i];
    }

    // Bubble Sort
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (books[j] > books[j + 1]) {
                temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }

    // Display sorted Book IDs
    cout << "\nBook ID in Ascending Order\n";
    for (int i = 0; i < 5; i++) {
        cout << books[i] << endl;
    }

    return 0;
}