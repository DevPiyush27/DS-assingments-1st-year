#include <iostream> 
using namespace std; 

int main() { 
    int rollNo[5]; 
    int searRoll; 

    cout << "Enter Roll Numbers of 5 students:\n"; 
    for (int i = 0; i < 5; i++) { 
        cin >> rollNo[i]; 
    } 

    cout << "\nEnter Roll Number to search: "; 
    cin >> searRoll; 

    bool found = false; 
    for (int i = 0; i < 5; i++) { 
        if (rollNo[i] == searRoll) { 
            found = true; 
        } 
    } 

    if (found) { 
        cout << "Student Found!"; 
    } else { 
        cout << "Student Not Found!"; 
    } 

    return 0; 
} 