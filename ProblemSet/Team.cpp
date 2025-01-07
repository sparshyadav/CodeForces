#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ques = 0;
    while (n--)
    {
        int count = 0;

        int x;
        cin >> x;
        count += x;

        int y;
        cin >> y;
        count += y;

        int z;
        cin >> z;
        count += z;

        if (count >= 2)
        {
            ques++;
        }
    }

    cout << ques;
}