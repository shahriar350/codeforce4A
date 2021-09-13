#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    cin >> n;
    int arr[n], sum = 0, tempSum=0,moneyCount=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    sum = sum/2;
    
    for(int i=n-1;i>=0;i--){
        tempSum+=arr[i];
        moneyCount++;
        if(tempSum >sum) break;
    }
    cout << moneyCount;
}