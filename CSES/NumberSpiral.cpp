#include <iostream>
using namespace std;

#define ll long long

int main() {

  ll n = 0;
  cin >> n;

  while (n--) {
    ll x = 0, y = 0;
    cin >> x >> y;
    ll res = 0;
    if (x >= y) {
      if (x % 2 == 0)
        res = x * x - y + 1;
      else
        res = (x - 1) * (x - 1) + y;
    } else {
      if (y % 2 == 0)
        res = (y - 1) * (y - 1) + x;
      else
        res = y * y - x + 1;
    }
    cout << res << endl;
  }

  return 0;
}
