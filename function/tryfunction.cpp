#include <iostream>
using namespace std;

int printHello(string name)
{

    cout << "Hello " << name << endl;

    return 1;
}

// min of 2

int minOfNumber(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// calculate the sum
int sumOfNumber(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    return sum;
}

int factorial(int n)
{
    int factor = 1;

    for (int i = 1; i <= n; i++)
    {
        factor *= i;
    }
    return factor;
}

int digitSum(int n)
{
    int digitSum = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        n /= 10;

        digitSum += lastDigit;
    }

    return digitSum;
}

int main()
{
    int value = printHello("Priya Mam");
    int minValue = minOfNumber(10, 102);
    int sumValue = sumOfNumber(10);
    int factorValue = factorial(3);
    int digitValue = digitSum(33333);

    cout << value << endl;
    cout << "Min value is " << minValue << endl;
    cout << "Sum of n number is " << sumValue << endl;
    cout << "factorial of n number is " << factorValue << endl;
    cout << "digit value of n number is " << digitValue << endl;
    return 0;
}