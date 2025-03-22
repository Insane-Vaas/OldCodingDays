#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void genratePermutations(vector<vector<int>> &res, vector<int> v, int n,
                         int i) {

  if (i >= n) {
    res.push_back(v);
  } else {

    for (int j = i; j < n; j++) {
      swap(v[i], v[j]);
      genratePermutations(res, v, n, i + 1);
      swap(v[i], v[j]);
    }
  }
}

int main() {

  vector<int> v = {1, 2, 3};

  int n = v.size();
  vector<vector<int>> res;

  genratePermutations(res, v, n, 0);
  sort(res.begin(), res.end());

  for (auto it : res) {
    for (auto i : it) {
      cout << i << " ";
    }
    cout << endl;
  }

  /*
    Using in Build Library to get all the permutations
  */
  cout << "Using in built library to get all the permutations." << endl;
  vector<int> arr1 = {1, 2, 3, 4};
  int count = 0;
  do {
    for (auto it : arr1) {
      cout << it << " ";
    }
    count++;
    cout << endl;
  } while (next_permutation(arr1.begin(), arr1.end()));

  cout << "Using in built library to get all the permutations but it has some "
          "limitations it only works on sorted ascending order arrays or "
          "vectors 😢."
       << endl;
  vector<int> arr2 = {3, 4, 2, 1};
  int count1 = 0;
  do {
    for (auto it : arr2) {
      cout << it << " ";
    }
    count1++;
    cout << endl;
  } while (next_permutation(arr2.begin(), arr2.end()));

  cout << "First one -> " << count << endl;
  cout << "Second one -> " << count1 << endl;

  return 0;
}
