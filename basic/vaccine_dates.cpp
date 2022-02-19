#include <bits/stdc++.h>

using namespace std;

int main(){

    // D firest dose
    // L second dose
    // R no more than D first dose

    int tt;
    cin >> tt;
    while(tt--){
        int D, L, R;
        cin >> D >> L >> R;
        
        // D -> L , than R
        
        if ( L < R ) {
            cout << "too early" << endl;
        }
        else if ( L > R ){
            cout << "too late"  << endl;
        }
        else {
            cout << "take second dose now" << endl;
        }
    }


}