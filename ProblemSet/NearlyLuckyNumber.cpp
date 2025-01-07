#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    int countLuckyNumbers = 0;
    while (n != 0)
    {
        int rem = n % 10;
        if (rem == 4 || rem == 7)
        {
            countLuckyNumbers++;
        }

        n=n/10;
    }

    if (countLuckyNumbers == 4 || countLuckyNumbers == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}