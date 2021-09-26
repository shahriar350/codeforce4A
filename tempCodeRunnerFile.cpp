#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == 'W' && a[i + 1] == 'U' && a[i + 2] == 'B')
        {
            i = i + 2;
        }
        else
        {
            for (int j = i; j < a.length(); j++)
            {
                // cout << "check " << a[j] << endl;
                if (a[j + 1] == 'W' && a[j + 2] == 'U' && a[j + 3] == 'B')
                {
                    cout << a[j];
                    i = j + 3;
                    break;
                }
                else
                {
                    cout << a[j];
                }
            }
            cout << " ";
        }
    }
}