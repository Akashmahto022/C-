#include <iostream>
using namespace std;

int decimalToBinary(int num)
{
    int ans = 0, pow = 1;

    while (num > 0)
    {
        int rem = num % 2;
        num /= 2;

        ans += (rem * pow);
        pow *= 10;
    }

    return ans;
}

int main()
{
    int num = 50;

    cout << decimalToBinary(num) << endl;

    return 0;
}