#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        // array A having N element
        // equal
        int n;
        cin >> n;
        vector<int> a(n);
        for ( int i = 0; i <= n - 1; i++ ) {
            cin >> a[i];
        }
        int maxx = *max_element(a.begin(), a.end());
        int ans = 0;
        for( auto x : a) {
            ans = max(ans, maxx - x);
        }
        cout << ans << endl;
    }
    return 0;
}