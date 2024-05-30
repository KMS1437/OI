#include <iostream>
using namespace std;
int main() {
  int n, m, p, i, j, k;
  cin >> n >> m >> p;
    
  int a[100][100], b[100][100], res[100][100];
    
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
    
  for (i = 0; i < m; i++) {
    for (j = 0; j < p; j++) {
      cin >> b[i][j];
    }
  }
    
  for (i = 0; i < n; i++) {
    for (j = 0; j < p; j++) {
      res[i][j] = 0;
      for (k = 0; k < m; k++) {
        res[i][j] += a[i][k] * b[k][j];
      }
    }
  }
    
  for (i = 0; i < n; i++) {
    for (j = 0; j < p; j++) {
      cout << res[i][j] << ' ';
    }
    cout << '\n';
  }
}
