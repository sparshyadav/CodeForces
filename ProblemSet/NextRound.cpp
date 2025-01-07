#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int k;
    cin >> k;

    vector<int> arr(n);

    int num = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (i == k-1)
        {
            num = arr[i];
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= num && arr[i] >= 1)
        {
            count++;
        }
    }

    cout << count;
}