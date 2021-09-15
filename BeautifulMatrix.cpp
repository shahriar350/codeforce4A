#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[5][5];
    int val;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int b;
            cin >> b;
            a[i][j] = b;
            if (b == 1)
            {
                int raw = abs(2 - i);
                int col = abs(2 - j);
                val = raw + col;
            }
        }
    }

    cout << val;
}