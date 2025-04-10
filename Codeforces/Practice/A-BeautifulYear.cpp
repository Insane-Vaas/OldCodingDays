#include <iostream>
using namespace std;

int main() {

  int n = 0;
  cin >> n;

  for (int i = n + 1; i <= 9013; i++) {
    int arr[10] = {0};
    int x = i;
    bool uni = true;
    while (x > 0) {
      int d = x % 10;
      x /= 10;
      arr[d] += 1;
      if (arr[d] >= 2) {
        uni = false;
        break;
      }
    }
    if (uni == true) {
      cout << i << endl;
      break;
    }
  }
  return 0;
}
