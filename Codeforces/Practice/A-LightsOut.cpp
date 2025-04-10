#include <iostream>
#include <vector>
using namespace std;

void help(int i, int j, vector<vector<int>> &v, vector<vector<int>> &res,
          int val) {

  if (j - 1 >= 0) {
    res[i][j - 1] = (res[i][j - 1] + val) % 2;
  }
  if (i - 1 >= 0) {
    res[i - 1][j] = (res[i - 1][j] + val) % 2;
  }
  if (i + 1 <= 2) {
    res[i + 1][j] = (res[i + 1][j] + val) % 2;
  }
  if (j + 1 <= 2) {
    res[i][j + 1] = (res[i][j + 1] + val) % 2;
  }
}

int main() {

  vector<vector<int>> v(3, (vector<int>(3)));
  vector<vector<int>> res(3, (vector<int>(3, 1)));
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> v[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (v[i][j] != 0 && v[i][j] % 2 == 1) {

        help(i, j, v, res, (v[i][j]) % 2);
        res[i][j] = (res[i][j] + 1) % 2;
      }
    }
  }

  for (auto it : res) {
    for (auto i : it) {
      cout << i;
    }
    cout << endl;
  }

  return 0;
}
