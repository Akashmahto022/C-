#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter yout number : ";
    cin >> n;
    int sum = 1;

    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 3 == 0)
    //     {
    //         sum += i;
    //     }
    // }

    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }

    cout << sum;

    return 0;
}