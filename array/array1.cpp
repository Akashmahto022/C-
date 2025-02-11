#include <iostream>
using namespace std;

int main()
{
    // int size = 5;
    // int marks[size];

    // // cout << size << endl;
    // // cout << marks[3] << endl;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter your " << i << " number : ";
    //     cin >> marks[i];
    // }

    // for (int i = 0; i < size; i++)
    // {
    //     cout << marks[i] << endl;
    // }

    // int number[] = {2, 12, -12, 32, 21};

    // int size = 4;

    // cout << size << endl;

    // int smalest = 0;
    // int largest = 0;
    // for (int i = 0; i < size; i++)
    // {
    //     if (number[i] < smalest)
    //     {
    //         smalest = number[i];
    //     }
    //     if (number[i] > largest)
    //     {
    //         largest = number[i];
    //     }
    // }

    // cout << "Your Smallest Number is : " << smalest << endl;
    // cout << "Your largest Number is : " << largest << endl;

    int arr[] = {2, 4, 6, 8, 10};
    int target = 8;
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "your index value is : " << i;
            break;
        }
    }

    return 0;
}