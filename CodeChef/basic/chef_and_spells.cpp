#include <bits/stdc++.h>

using namespace std;

int main(){

    int tt;
    cin >> tt;
    while(tt--){
        // power A, B ,C
        // initially 0 hit points
        // spell with power P
        // P increase
        int a, b, c;
        cin >> a >> b >> c;
        cout << a + b + c - min(a, min(b, c)) << endl;

       
         
    }
    return 0;
}