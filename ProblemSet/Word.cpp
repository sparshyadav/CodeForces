#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int up = 0;
    int low = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (islower(str[i]))
        {
            low++;
        }
        else
        {
            up++;
        }
    }

    if (up > low)
    {
        for (int i = 0; i < str.size(); i++)
        {
            cout << (char)toupper(str[i]);
        }
    }
    else
    {
        for (int i = 0; i < str.size(); i++)
        {
            cout << (char)tolower(str[i]);
        }
    }
}