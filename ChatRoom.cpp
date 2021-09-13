#include <bits/stdc++.h>

using namespace std;

int main()
{
    string hello;
    string spell= "hello";
    int count=0;
    cin >> hello;
    for(int i=0;i<hello.size();i++){
        if(hello[i] == spell[count]){
            count++;
            if(count == 5){
                break;
            }
        }
    }
    if(count ==5 ){
        cout << "YES";
    } else {
        cout << "NO";
    }
}
