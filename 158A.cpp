//
// Created by sarka on 24-08-2018.
//

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int temp;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp > k){
            cnt++;
//            cout << temp<<" ";
        }
    }
    cout << cnt;
    return 0;
}