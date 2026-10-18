#include <iostream> 
using namespace std; 

int main() { 
    int mark[5]; 
    cout << "Enter marks of 5 students:\n"; 
    for (int i = 0; i < 5; i++) { 
        cin >> mark[i]; 
    } 
    for (int i = 0; i < 4; i++) { 
        for (int j = 0; j < 4 - i; j++) { 
            if (mark[j] < mark[j + 1]) { 
                int temp = mark[j]; 
                mark[j] = mark[j + 1]; 
                mark[j + 1] = temp; 
            } 
        } 
    } 
    cout << "\nStudent Rank  on Marks:\n"; 
    for (int i = 0; i < 5; i++) { 
        cout << mark[i] << endl; 
    } 
    return 0; 
} 