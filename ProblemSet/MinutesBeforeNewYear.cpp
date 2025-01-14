#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int hours;
        cin >> hours;

        int mins;
        cin >> mins;

        int leftMins = 60 - mins;
        int leftHours = 24 - hours - 1;

        int ans = leftMins;
        if (leftHours != 0)
        {
            ans += leftHours * 60;
        }

        cout << ans << endl;
    }
}