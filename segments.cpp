#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, x, k;
  cin >> n >> x >> k;

  // Fill aay with n values
  vector<int> a;
  int element;
  for (int i = 0; i < n; i++)
  {
    cin >> element;
    a.push_back(element);
  }

  // Sort array
  sort(a.begin(), a.end());

  // For each left value get a good right value
  for (int i = 0; i < n; i++)
  {
      // Get the max limit for each a[i]
  }

  return 0;
}
