#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {

  vector<string> words = {"foo", "bar", "check"};
  sort(words.begin(), words.end());

  do {
    for (auto it : words) {
      cout << it << " ";
    }
    cout << endl;
  } while (next_permutation(words.begin(), words.end()));

  string s = "Hrithik";
  int n = s.find('H');
  cout << n << endl;
}
