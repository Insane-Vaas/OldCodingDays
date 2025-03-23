#include <iostream>
using namespace std;

int main() {

  int n = 5;
  int x = 0, y = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int d = 0;
      cin >> d;
      if (d == 1) {
        x = i;
        y = j;
      }
    }
  }

  cout << abs(2 - x) + abs(2 - y) << endl;

  return 0;
}
