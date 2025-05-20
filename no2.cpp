#include <iostream>
using namespace std;

int main() {
    int m = 2, n = 3;
    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    int besar = A[0][0];
    int kecil = A[0][0];
    int cari = 6;
    int ketemu = 0;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(A[i][j] > besar)
                besar = A[i][j];
            if(A[i][j] < kecil)
                kecil = A[i][j];
            if(A[i][j]==cari)
                ketemu = 1;
                break;
        }
    }

    cout << "elemen terbesar: " << besar << endl;
    cout << "elemen terkecil: " << kecil << endl;

    if(ketemu)
        cout << "ada elemen dengan nilai " << cari << endl;
    else
        cout << "tidak ada elemen dengan nilai " << cari << endl;
    


    return 0;
}
