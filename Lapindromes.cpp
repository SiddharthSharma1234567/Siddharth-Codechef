#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int count = 0;
        cin >> s;
        int n = s.length();
        string x, y;
        if (s.length() %2 == 0)
        {
            for (int i = 0; i < s.length() / 2; i++)
            {
                x = x + s[i];
            }
            for (int i = s.length() / 2; i < s.length(); i++)
            {
                y = y + s[i];
            }
        }
        else
        {
            for (int i = 0; i < s.length() / 2; i++)
            {
                x = x + s[i];
            }
            for (int i = s.length() / 2 + 1; i < s.length(); i++)
            {
                y = y + s[i];
            }
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        for (int i = 0, j = 0; i < x.length(), j < y.length(); i++, j++)
        {
            if (x[i] == y[j])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        if (count == n / 2)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}