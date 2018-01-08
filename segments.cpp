#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int findPair(vector<int> a, int x, int k, int i, int j)
{
  int sizeOfA = (int) a.size();
  if (sizeOfA == 1)
  {
    int divisors = a[0] / x - (a[0] - 1) / x;
    if (divisors == k)
      // TODO
      // Find the maximum value for good pairs
  }
  return 0;
}

void slice(vector<int> vec)
{
  cout << "Sliced vector size: " << (int) vec.size() << endl;
  for (int i = 0; i < (int) vec.size(); i++)
    cout << vec[i] << " ";
  cout << endl;
}

int main()
{
  int n, x, k;
  cin >> n >> x >> k;

  // Fill array with n values
  vector<int> a;
  int element;
  for (int i = 0; i < n; i++)
  {
    cin >> element;
    a.push_back(element);
  }

  // Sort array
  sort(a.begin(), a.end());

  // For each a[j] guess a good right side


  return 0;
}
