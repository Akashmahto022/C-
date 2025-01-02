#include <iostream>
using namespace std;

int main()
{

    // int age;
    // cout << "enter your age : ";
    // cin >> age;

    // if (age < 18)
    // {
    //     cout << "sorry but You not able to participate in election";
    // }
    // else
    // {
    //     cout << "yes! you able to participate in election";
    // }

    char ch;
    cout << "enter your char :";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "lowercase";
    }
    else
    {
        cout << "uppercase";
    }

    return 0;
}