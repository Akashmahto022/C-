#include <iostream>
using namespace std;

int main()
{
    // int numberOfStudents[5] = {2, 4, 6, 8, 10};
    // int size = 5;
    // int marks[size];

    // for (int i = 0; i < size; i++)
    // {
    //     cin >> marks[i];
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << marks[i] << endl;
    // }

    int num[] = {5, 10, 20, 40, -60};
    int size = 5;
    int smallest = __INT_MAX__;

    for (int i = 0; i < size; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
    }
    cout << "smallest number is : " << smallest << endl;
}