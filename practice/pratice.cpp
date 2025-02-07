#include <iostream>
using namespace std;

int maxNumber(int num1, int num2)
{
    int maxValue;
    if (num1 > num2)
    {
        maxValue = num1;
    }
    else
    {
        maxValue = num2;
    }
    return maxValue;
}

int main()
{

    cout << "hello akash" << endl;

    // variable

    // int num;
    // num << 20;
    // cout << "your number is :" << num << endl;

    // string name = "Akash";
    // cout << "Your Name is :" << name << endl;

    // string name;
    // cout << "Enter Your Name : " << endl;
    // cin >> name;

    // int age;

    // cout << "Enter Your Age : ";
    // cin >> age;
    // cout << "Your Name is :" << name << endl;
    // cout << "Your Age is : " << age << endl;

    int num1, num2;

    cout << "Enter your first number" << endl;

    cin >> num1;

    cout << "Enter Your Second Number" << endl;
    cin >> num2;

    int addTotal = num1 + num2;
    int multipleTotal = num1 * num2;
    int divideTotal = num1 / num2;
    int subtractTotal = num1 - num2;
    int modulesTotal = num1 % num2;
    int maxValue = maxNumber(num1, num2);

    cout << "Your first number is : " << num1 << "and second number is : " << num2 << endl;

    cout << "sum of two number is : " << addTotal << endl;
    cout << "Multiple of two number is : " << multipleTotal << endl;
    cout << "divive of two number is : " << divideTotal << endl;
    cout << "subtract of two number is : " << subtractTotal << endl;
    cout << "modules of two number is : " << modulesTotal << endl;
    cout << "max Number of two number is : " << maxValue << endl;
    // cout << "sum of two number is : " << addTotal << endl;

    return 0;
}