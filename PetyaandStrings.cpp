#include <bits/stdc++.h>

using namespace std;
string upperToLower(string s)
{
    for (auto &c : s)
    {
        c = tolower(c);
    }
    return s;
}
int main()
{
    string word1, word2;
    cin >> word1;
    cin >> word2;
    word1 = upperToLower(word1);
    word2 = upperToLower(word2);

    if (word1.length() == word2.length())
    {
        auto out = 0;

        for (auto i = 0; i < word1.length(); i++)
        {
            bool flag = false;

            if (int(word1[i]) == int(word2[i]))
            {
                continue;
            }
            else if (int(word1[i]) < int(word2[i]))
            {
                out = -1;
                break;
            }
            else
            {
                out = 1;
                break;
            }
        }
        cout << out;
    }
    return 0;
}