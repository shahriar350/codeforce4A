#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int arr[a][3];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int b;
            cin >> b;
            arr[i][j] = b;
        }
    }

    bool check = false;
    for (int i = 0; i < 3; i++)
    {
        int sum;
        for (int j = 0; j < a; j++)
        {
            sum += arr[j][i];
        }

        if (sum == 0)
        {
            check = true;
        }
        else
        {
            check = false;
            break;
        }
    }
    if (check)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}