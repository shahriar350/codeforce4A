#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, mina = 0, minval = 100, maxval = 0, maxa = 0;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        arr[i] = b;
        if (minval >= b)
        {
            minval = b;
            mina = i;
        }
        if (maxval < b)
        {
            maxval = b;
            maxa = i;
        }
    }
    if (maxa > mina)
    {
        cout << (maxa - 1) + (a - mina) - 1;
    }
    else
    {
        cout << (maxa - 1) + (a - mina);
    }
}