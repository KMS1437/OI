#include <iostream>
using namespace std;
int main() {
  int n, m, i, j;
  cin >> n >> m;
   
  int a[100][100], b[100][100], res[100][100];
   
  for (i = 0; i < n; i++) {
    for (j = 0; j < m;j++) {
      cin >> a[i][j];
    }
  }
   
  for (i = 0; i < n; i++) {
    for (j = 0; j < m;j++) {
      cin >> b[i][j];
    }
  }
   
  for (i = 0; i < n; i++) {
    for (j = 0; j < m;j++) {
      res[i][j] = a[i][j] + b[i][j];
    }
  }
   
  for (i = 0; i < n; i++) {
    for (j = 0; j < m;j++) {
      cout << res[i][j] << ' ';
    }
    cout << '\n';
  }
}
