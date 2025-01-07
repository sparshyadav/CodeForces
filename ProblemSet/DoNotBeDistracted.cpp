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

        string str;
        cin >> str;

        unordered_set<char> st;
        st.insert(str[0]);

        bool isDistracted = false;
        for (int i = 1; i < n; i++)
        {
            if (str[i] != str[i - 1])
            {
                if (st.find(str[i]) != st.end())
                {
                    isDistracted = true;
                    break;
                }

                st.insert(str[i]);
            }
        }

        if (isDistracted)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}