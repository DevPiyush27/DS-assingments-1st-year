#include <iostream> 
using namespace std; 

int main() { 
    int rollNo[5]; 
    cout << "Enter 5 studentsRoll Numbers of :\n"; 
    for (int i = 0; i < 5; i++) { 
        cin >> rollNo[i]; 
    } 
    cout << "\nStudent Roll Number:\n"; 
    for (int i = 0; i < 5; i++) { 
        cout << rollNo[i] << endl; 
    } 
    return 0; 
} 