#include <bits/stdc++.h>
using namespace std;

int main()
{
    int bananaCost;
    cin >> bananaCost;

    int dollars;
    cin >> dollars;

    int needBananas;
    cin >> needBananas;

    int cost = 0;
    int prev = bananaCost;
    for (int i = 1; i <= needBananas; i++)
    {
        int currCost = i * bananaCost;
        cost += currCost;
        prev = currCost;
    }

    if (cost < dollars)
    {
        cout << 0;
    }
    else
    {
        cout << cost - dollars;
    }
}