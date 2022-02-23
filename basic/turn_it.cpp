#include <bits/stdc++.h>

using namespace std;

int main(){

    int tt;
    cin >> tt;
    while(tt--){
        
        // U velocity
        // S meter
        // V meter

        // A brakes
        int U, V, A, S;
        cin >> U >> V >> A >> S;

        // U < V
        if ( U * U - 2 * A * S <= V * V )
            cout << " yes " << endl;
        else 
            cout << " no " << endl;
        

    }
    return 0;
}