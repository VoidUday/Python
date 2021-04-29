#include<stdio.h>
#include<iostream>
using namespace std;


int compute(int A, int B, int C){
    A = A*A*A;
    B = B*B*B;
    C = C*C*C;
    cout << A << B << C;
    return 0;
}

int main(){
    int A, B, C;
    cin>>A>>B>>C;
    compute(A, B, C);
    return 0;
}
