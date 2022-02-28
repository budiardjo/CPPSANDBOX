#include <iostream>

using namespace std;

int main() {

        // n people
        // p chef stsanding
        // x minutes to vaccine child
        // y minutes to vaccine elder

        // 4 2 3 2
        // 0 1 0 1
        // 4 people and chef standing in 2 people
        // so it has 1 child and 1 elder
        // it takes 2 + 3 = 5 minutes

        //g++ -std=c++11 -O2 -Wall .\chefInVaccination.cpp -o solution

    int tt;
    cin >> tt;
    while(tt--) {
        int N, P, X, Y;
        cin >> N >> P >> X >> Y;
        int A[N]; // input array with n number ( n is size of array )
        for ( int i = 0; i < N ;i++) {
            cin >> A[i]; // input array with i number
        }
        int ans = 0;
        for ( int i = 0; i < P ;i++) {
            
            if(A[i] == 1) 
                ans += Y;
            else 
                ans += X;
        }
        cout << ans << endl;
        
    }
    return 0;
}