#include <iostream>
using namespace std;

int main() {

  int n = 0, k = 0;
  cin >> n >> k;

  string str = "";
  cin >> str;

  for (int i = 0; i < k; i++) {

    for (int i = 0; i < n - 1; i++) {
      if (str[i] == 'B' && str[i + 1] == 'G') {
        swap(str[i], str[i + 1]);
        i++;
      }
    }
  }
  cout << str << endl;
  return 0;
}
