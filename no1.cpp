#include <iostream>
using namespace std;
int main() {
   int A[5] = {0,1,2,3,4};
   int N = 5;
   int i;

    for(i = 1; i < N; i++) {
        if(A[i] != A[0]) {
            break;
        }
    }

    if(i == N)
        cout << "elemen semua sama";
    else
        cout << "ada yang beda";
   
  return 0;
}
