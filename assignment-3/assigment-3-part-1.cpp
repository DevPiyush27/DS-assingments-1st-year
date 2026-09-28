#include <iostream>
using namespace std;
int main()
{
    int queue[5];
    int front = 0;
    int rear = 0;
    cout << "Enter order numbers of 5 customers:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> queue[rear];
        rear++;
    }
    cout << "\nProcess= Orders:\n";
    while (front < rear)
    {
        cout << "Process Order: " << queue[front] << endl;
        front++;
    }
    return 0;
}