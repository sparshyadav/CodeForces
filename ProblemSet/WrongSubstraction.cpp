#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int k;
    cin >> k;

    while (k > 0)
    {
        int rem = n % 10;
        if (rem != 0)
        {
            n = n - 1;
        }
        else
        {
            n = n / 10;
        }

        k--;
    }

    cout << n;
}