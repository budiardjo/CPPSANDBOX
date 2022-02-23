#include <iostream>

using namespace std;

int main() {

    int tt;
    cin >> tt;
    while(tt--) {

        // A B feature
        // A1 B1 or A2 B2
        int a, b, a1, b1, a2, b2;
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;

        int ans = 0;
        if ((a == a1 and b == b1) or (b == a1 and a == b1)) ans = 1;
        if ((a == a2 and b == b2) or (b == a2 and a == b2)) ans = 2;
        cout << ans << endl;
    }
    return 0;
}