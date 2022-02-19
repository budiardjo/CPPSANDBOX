#include <bits/stdc++.h>

using namespace std;

int main () {

    int tt;
    cin >> tt;
    while (tt--) {
        int n, x;
        int ans = 0;
        cin >> n >> x;
        for (int i = 0; i < n; i++) {
            int s, r;
            cin >> s >> r;

            // highest imdb rating r
            // help chef choose the r that can fit in x
            if (s <= x && ans < r)
            ans = r;
        }
        cout << ans << endl;
    }
    return 0;
}