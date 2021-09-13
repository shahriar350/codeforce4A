#include <bits/stdc++.h>

using namespace std;

int main()
{
    int lucky;
    cin >> lucky;
    bool check = false;
    string luckyString = to_string(lucky);
    for(int i=0;i<luckyString.size();i++){
        if(luckyString[i] == '4' || luckyString[i] == '7'){
            check=true;
        } else {
            check=false;
            break;
        }
    }
    if(check == false){
        if(lucky % 4 ==0 || lucky % 7 ==0|| lucky % 47 ==0){
            check=true;
        }
    }
    if(check){
        cout << "YES";
    } else {
        cout << "NO";
    }
}