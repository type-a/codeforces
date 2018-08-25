//
// Created by sarka on 24-08-2018.
//

#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;cin>>n;
    int a,b,c;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        arr[i] = (a+b+c);
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=2){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}