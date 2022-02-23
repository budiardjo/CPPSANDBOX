#include <bits/stdc++.h>

using namespace std;

int main(){

    int tt;
    cin >> tt;
    while(tt--){

    // N guest
    // A fruit
    // B vegetables
    // C fishes

    // first type 1 fruit and ine vegetable
    // two type 1 vegetable and 1 fish

    // A 1 B 1
    // B 1 C 1

    // 2 1 2 1
    // B == A + C && B >= A + C 
        
        int N, A, B, C;
        cin >> N >> A >> B >> C;

        if ( A + C >= N && B >= N) 
            cout << "yes" << endl;
        else 
            cout << " no " << endl;

    }
    return 0;
}