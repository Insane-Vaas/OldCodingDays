#include <algorithm>
#include <iostream>
#include <vector>

int getMaxStability(std::vector<int> reliability,
                    std::vector<int> availability) {
  int n = reliability.size();
  std::vector<std::pair<int, int>> servers(n);
  for (int i = 0; i < n; ++i) {
    servers[i] = {availability[i], reliability[i]};
  }
  std::sort(servers.begin(), servers.end());

  long long max_stability = 0;
  long long mod = 1e9 + 7;

  for (int i = 0; i < n; ++i) {
    long long current_availability = servers[i].first;
    long long current_reliability_sum = 0;
    for (int j = i; j < n; ++j) {
      current_reliability_sum =
          (current_reliability_sum + servers[j].second) % mod;
    }
    long long current_stability =
        (current_availability * current_reliability_sum) % mod;
    max_stability = std::max(max_stability, current_stability);
  }
  return static_cast<int>(max_stability);
}

int main() {
  std::vector<int> reliability1 = {1, 2, 2};
  std::vector<int> availability1 = {1, 1, 3};
  std::cout << getMaxStability(reliability1, availability1)
            << std::endl; // Output: 9

  std::vector<int> reliability2 = {2, 5, 1};
  std::vector<int> availability2 = {3, 1, 4};
  std::cout << getMaxStability(reliability2, availability2)
            << std::endl; // output: 14

  return 0;
}
