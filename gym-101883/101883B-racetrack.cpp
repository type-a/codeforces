//
// Created by sarka on 25-08-2018.
//

#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0 || b == 0)
        return 0;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main(){
    int a,b;cin>>a>>b;
    cout << a*b/gcd(a,b);
    return 0;
}