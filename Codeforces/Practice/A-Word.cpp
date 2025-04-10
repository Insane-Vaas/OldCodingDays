#include <cctype>
#include <iostream>
using namespace std;

int main() {

  string s = "";
  cin >> s;

  int lo = 0, up = 0;

  for (int i = 0; i < s.length(); i++) {

    if (s[i] >= 'A' && s[i] <= 'Z')
      up++;
    else
      lo++;
  }

  if (lo >= up) {
    for (auto x : s) {
      cout << (char)tolower(x);
    }
    cout << endl;
  } else {
    for (auto &x : s) {
      cout << (char)toupper(x);
    }
    cout << endl;
  }

  return 0;
}
