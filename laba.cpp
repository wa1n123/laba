#include <iostream>
using namespace std;

int main() {
    int n;int m;int k;
    cin>>n;cin>>m;cin>>k;
    int matrix[n][m];
    int matrix1[m][k];
    int result[n][k]; 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
        for(int i=0;i<m;i++){
            for(int j=0;j<k;j++){
                cin>>matrix1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            result[i][j] = 0;
            for(int l = 0; l < m; l++) {
                result[i][j] += matrix[i][l] * matrix1[l][j];
            }

        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
