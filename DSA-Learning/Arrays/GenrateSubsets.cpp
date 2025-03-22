#include <iostream>
#include <vector>
using namespace std;

bool comp(const vector<int> &a, const vector<int> &b) {
  return a.size() < b.size();
}

int main() {

  int arr[] = {1, 2, 3, 4, 5};

  int n = sizeof(arr) / sizeof(arr[0]);
  vector<vector<int>> allSets;
  for (int i = 0; i < (1 << n); i++) {
    vector<int> sets;
    for (int j = 0; j < n; j++) {
      if ((i & (1 << j)) != 0) {
        sets.push_back((arr[j]));
      }
    }
    if (sets.size() == 0)
      sets.push_back(0);
    allSets.push_back(sets);
  }
  sort(allSets.begin(), allSets.end(), comp);
  for (auto it : allSets) {
    cout << "{ ";
    for (auto i : it) {
      cout << i << " ";
    }
    cout << "}";
    cout << endl;
  }

  cout << "The number of sets that we can make from n size array is 2^n "
       << endl;
  cout << "Size of Array -> " << n << endl;
  cout << allSets.size() << endl;

  return 0;
}
