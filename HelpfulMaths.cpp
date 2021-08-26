#include <bits/stdc++.h>

using namespace std;

int main()
{
    string word;
    cin >> word;
    vector<int> val;
    if (word.length() > 2)
    {
        for (int i = 0; i < word.length(); i++)
        {
            if (int(word[i]) == 43)
            {
                continue;
            }
            else
            {
                val.push_back(int(word[i]));
            }
        }
        sort(val.begin(), val.end());
        for (int i = 0; i < val.size(); i++)
        {
            if (i == 0)
            {
                cout << char(val[i]);
            }
            else
            {
                cout << char(43) << char(val[i]);
            }
        }
    }
    else
    {
        cout << word;
    }
    return 0;
}