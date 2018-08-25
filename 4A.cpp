#include <iostream>

using namespace std;

int main() {
//    std::cout << "Hello, World!" << std::endl;
    int val;
    cin>>val;
    if(val == 2) cout << "NO";
    else if(val%2 == 0) cout << "YES";
    else cout << "NO";
    return 0;
}