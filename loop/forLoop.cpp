#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter your number : ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i != 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}