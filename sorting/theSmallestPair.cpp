#include <iostream>
#define INT_MAX 2147483647

using namespace std;

int main() {

    int tt;
    cin >> tt;
    while(tt--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i=0; i < n; i++) {
            cin >> arr[i];
        }

        int min = INT_MAX;
        int smin = min;

        for ( int i = 0; i < n; i++) {
            if(arr[i] < min) {
                smin = min;
                min = arr[i];
            }
            else {
                if(arr[i] < smin) {
                    smin = arr [i];
                }
            }
        }

        cout << min + smin << endl;
    }


}