#include <bits/stdc++.h>

using namespace std;

int main () {
    // array of inteegers a[1 ... n]
    // array become the same a1 = a2 = a3

    // increase by 1

    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int a[n];
        for ( int i = 0; i <= n-1; i++){
            cin >> a[i];
        }

        int MIN = INT_MAX;
        int MAX = INT_MIN;
        for ( int i = 0; i <= n-1; i++){
            MIN = min(MIN, a[i]);
            MAX = max(MAX, a[i]);
        }
        cout << MAX - MIN << "\n";
    }

}