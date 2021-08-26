#include <bits/stdc++.h>

using namespace std;

int main()
{
    string word;
    cin >> word;
    for (auto i = 0; i < word.length(); i++)
    {
        if (word[i] == 'a' || word[i] == 'A' || word[i] == 'e' || word[i] == 'E' || word[i] == 'i' || word[i] == 'I' || word[i] == 'o' || word[i] == 'O' || word[i] == 'u' || word[i] == 'U' || word[i] == 'Y' || word[i] == 'y')
        {
            continue;
        }
        cout << ".";
        if (isupper(word[i]))
        {

            cout << char(tolower(word[i]));
        }
        else
        {
            cout << word[i];
        }
    }
    return 0;
}