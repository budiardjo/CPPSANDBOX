#include <bits/stdc++.h>

using namespace std;

int main(){

    int tt;
    cin >> tt;
    while(tt--){
        // w1 weight
        // M lockdown
        // w2 weight at home

        // between x1 and x2

        int w1, w2, x1, x2, m;
        cin >> w1 >> w2 >> x1 >> x2 >> m;

        int mini = w1 + (x1 * m);
        int maxi = w1 + (x2 * m);

        if( mini <= w2 && w2 <= maxi) {
            cout << "i" << endl;
        }
        else {
            cout << "0" << endl;
        }
         
    }
    return 0;
}