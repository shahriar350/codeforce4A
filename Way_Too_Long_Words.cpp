#include <bits/stdc++.h>

using namespace std;

int main()
{
    string word;
    int count;
    cin >> count;
    while (count-- > 0)
    {
        cin >> word;
        if (word.length() > 10)
        {
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        }
        else
        {
            cout << word << endl;
        }
    }

    return 0;
}