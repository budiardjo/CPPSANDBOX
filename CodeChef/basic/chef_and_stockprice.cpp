#include <bits/stdc++.h>

using namespace std;

int main(){

    int tt;
    cin >> tt;
    while(tt--){
        // S price stock
        // range A, B
        // C%
        double s, a, b, c, sum, percent, sumtot;
        cin >> s >> a >> b >> c;


        // 100 93 108 7
        // 100 + 7 = 107

        // 183 152 172 -17
        // 17% = 17 / 100  
        // 183 * 0.17 = 31.11
        // 183 - 31.11 = 151.89

        percent = c / 100;
        sum = s * percent;
        sumtot = s + sum;

        if ( sumtot >= a &&  sumtot <= b ) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;

        }
    }
    return 0;
}