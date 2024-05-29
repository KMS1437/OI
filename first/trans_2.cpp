#include <iostream>
using namespace std;
 
int main() {
    int i, j, n, a[100][100], mas[100][100];
    cin >> n;
     
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }
     
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            mas[i][j] = a[n-1-j][n-1-i];
        }
    }
     
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            cout << mas[i][j] << " ";
        }
        cout << "\n";
    }
     
    return 0;
}
