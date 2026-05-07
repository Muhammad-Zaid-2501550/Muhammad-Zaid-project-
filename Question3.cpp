#include <iostream>
using namespace std;
void GetValue(int mat[3][3]) {
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++) cin >> mat[i][j];
}
void ComputeAxA(int A[3][3], int B[3][3], int C[3][3]) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            C[i][j] = 0;
            for(int k=0; k<3; k++) C[i][j] += A[i][k] * B[k][j];
        }
    }
}
void PrintArray(int mat[3][3]) {
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) cout << mat[i][j] << " ";
        cout << endl;
    }
}
int main() {
    int A[3][3], B[3][3], C[3][3];
    cout << "Enter Matrix A: "; GetValue(A);
    cout << "Enter Matrix B: "; GetValue(B);
    ComputeAxA(A, B, C);
    cout << "Result: " << endl; PrintArray(C);
    return 0;
}