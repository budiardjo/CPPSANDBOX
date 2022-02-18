#include <iostream>

using namespace std;

int main (){
    // N students
    // K watched lectured
    // each student i
    // each lecture j
    // Tij minutes
    // Q questionsm 
    // M minutes ask question < 10 times

    int N, M, K, Q, SUM, COUNT = 0;
    cin >> N >> M >> K;
    while (N--) {
        SUM = 0;
        int A[K];
        for (int i = 0; i < K ; i++){
            cin >> A[i];
            SUM += A[i];
        }
        cin >> Q;
        if (Q <= 10 && SUM >= M){
            COUNT++;
        }
    }
    cout << COUNT << endl;


}