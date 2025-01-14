#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int ans = INT_MAX;
        int bestC1 = 0;
        int bestC2 = 0;

        int low = 0;
        int high = n / 2;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int c2 = mid;
            int c1 = n - (2 * c2);

            if (c1 >= 0)
            {
                int diff = abs(c1 - c2);

                if (diff < ans)
                {
                    ans = diff;
                    bestC1 = c1;
                    bestC2 = c2;
                }

                if (c1 > c2)
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
            else
            {
                high = mid - 1;
            }
        }

        cout << bestC1 << " " << bestC2 << endl;
    }
}