#include <bits/stdc++.h>

using namespace std;

int main() {
  unsigned long long n, m;
  cin >> n >> m;

  if (n == m) {
    cout << n * n;
  } else if (n < m) {
    if (3 * n > 2 * m) {
      cout << (3 * n - 2 * m) * (3 * n - 2 * m);
    }
    else {
      cout << 0;
    }
  } else {
    if (n >= 2 * m + 1) {
      cout << (n - m) * (n - 2 * m) * 4 + n * n;
    } else {
      cout << n * n;
    }
  }


  return 0;
}
