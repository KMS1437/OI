#include <iostream>
using namespace std;
int main() {
  int m, n, i, j, a[100][100], mas[100][100];
   
  cin >> n >> m;
     
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
     
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            mas[i][j] = a[n - 1 - i][j];
        }
    }
     
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            cout << mas[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
