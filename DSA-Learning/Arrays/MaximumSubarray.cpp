#include <iostream>
using namespace std;

int main() {

  int arr[] = {-1, 2, 4, -3, 5, 2, -5, 2};
  int n = sizeof(arr) / sizeof(int);

  int sum = 0;
  int res = 0;
  for (int i = 0; i < n; i++) {

    sum += arr[i];
    res = max(sum, res);
    if (sum < 0)
      sum = 0;
  }

  cout << res << endl;

  // new method
  //
  res = 0;
  sum = 0;

  for (int i = 0; i < n; i++) {

    sum = max(arr[i], sum + arr[i]);
    res = max(res, sum);
  }

  cout << res << endl;
}
