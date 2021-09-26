#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    string ans;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == 'W' && a[i + 1] == 'U' && a[i + 2] == 'B')
        {
            if (ans[ans.length() - 1] == ' ')
            {
                i = i + 2;
            }
            else
            {
                i = i + 2;
                if (ans.length() > 0)
                {
                    ans.push_back(' ');
                }
            }
        }
        else
        {
            ans.push_back(a[i]);
        }
    }
    cout << ans;
}