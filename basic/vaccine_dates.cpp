#include <bits/stdc++.h>

using namespace std;

int main(){

    int tt;
    cin >> tt;
    while(tt--){
        int D, L, R;
        cin >> D >> L >> R;
        if ( D < L ) 
            cout << "Too early" << endl;
        else if ( D >= L && D <= R )
            cout << "Take second dose now"  << endl;
        else 
            cout << "Too Late" << endl;
    }
    return 0;
}