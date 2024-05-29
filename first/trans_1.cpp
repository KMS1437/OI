#include <iostream>
using namespace std;
int main() {
    int i, j, n, m, a[100][100], mas[100][100];
    cin >> n;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }
     
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            mas[i][j] = a[j][i];
        }
    }
     
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            cout << a[j][i] << " ";
        }
    cout << "\n";
    }
}
