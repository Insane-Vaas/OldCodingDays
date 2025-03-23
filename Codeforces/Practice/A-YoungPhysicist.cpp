#include <iostream>
using namespace std;

int main() {

  int n = 0;
  cin >> n;

  int x = 0, y = 0, z = 0;

  for (int i = 0; i < n; i++) {

    int x1 = 0, y1 = 0, z1 = 0;
    cin >> x1 >> y1 >> z1;
    x += x1;
    y += y1;
    z += z1;
  }

  if (x == 0 && y == 0 && z == 0) {
    cout << "YES" << endl;
  } else
    cout << "NO" << endl;

  return 0;
}
