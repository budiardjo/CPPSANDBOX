#include <bits/stdc++.h>

using namespace std;

int main () {
    int tt;
    cin >> tt;
    for ( int i = 0; i <= tt - 1; i++) {
        int n, s;
        cin >> n >> s;
        if ( s < n ) {
            cout << s << "\n";
        } else {
            cout << n * 2 - s << "\n";
        }

    }
}