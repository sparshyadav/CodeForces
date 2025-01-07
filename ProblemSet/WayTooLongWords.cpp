#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string str;
        cin >> str;

        int n = str.size();

        if (n < 11)
        {
            cout << str << endl;
        }
        else
        {
            cout << str[0] << n - 2 << str[n - 1] << endl;
        }
    }
}