#include <bits/stdc++.h>

using namespace std;

int main() {

    double n,m,a;
    cin>>n>>m>>a;
    if(n>=a && m>=a)
        cout << ceil(n/a) * ceil(m/a);
//    else if(n>=a && m<a)
//        cout << ceil(n/a);
//    else if(m>=a && n<a)
//        cout << ceil(m/a);
    else cout << 1;
}