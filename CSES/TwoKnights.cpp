#include <iostream>
using namespace std;

#define ll long long

int main() {

  ll n = 0;
  cin >> n;

  for (ll i = 1; i <= n; i++) {

    ll allPos = (i * i) * (i * i - 1) / 2;
    ll attPos = 4 * (i - 1) * (i - 2);
    ll res = allPos - attPos;
    cout << res << endl;
  }
}
