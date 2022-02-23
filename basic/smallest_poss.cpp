#include <bits/stdc++.h>

using namespace std;

int main(){

    int tt;
    cin >> tt;
    while(tt--){
        int N, K, ANS = 0;
        cin >> N >> K;
         // N - K
        if ( K == 0)
        cout << N << endl;
        else
        cout << N%K << endl;
    }
    return 0;
}