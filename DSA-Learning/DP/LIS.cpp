#include <iostream>
#include <vector>
using namespace std;

int main() {

  int arr[8] = {6, 2, 5, 1, 7, 4, 8, 3};
  int n = sizeof(arr) / sizeof(int);
  int lis[n];

  for (int i = 0; i < n; i++) {
    lis[i] = 1;

    for (int j = 0; j < i; j++) {
      if (arr[j] < arr[i]) {
        lis[i] = max(lis[i], lis[j] + 1);
      }
    }
  }

  for (auto it : lis) {
    cout << it << " ";
  }

  /*
  trying O(n*logn) Solution
  */
  int arr2[8] = {6, 2, 5, 1, 7, 4, 8, 3};
  vector<int> dp(n, 1e7);
  dp[0] = -1e7;

  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= i; j++) {
      if (dp[j - 1] < arr2[i] && dp[j] > arr2[i]) {
        dp[j] = arr2[i];
      }
    }
  }

  int ans = 0;

  for (int i = 0; i <= n; i++) {
    if (dp[i] < 1e7) {
      ans = i;
    }
  }
  cout << endl;
  cout << ans << endl;

  for (auto it : dp) {
    cout << it << " ";
  }

  return 0;
}
