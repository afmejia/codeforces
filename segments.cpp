#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int findPair(vector<int> a, int x, int k)
{
  int sizeOfA = (int) a.size();
  if (sizeOfA == 1)
  {
    int divisors = a[0] / x - (a[0] - 1) / x;
    if (divisors == k)
      // TODO
      // Find the maximum value for good pairs
  }
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

  // For each a[j] guess a good right side
  for (int i = 0, maxRight; i < n; i++)
  {
    maxRight = findPair(a, x, k, i, n);
  }

  // Slicing vectors
  /*cout << "Original vector size: " << (int) a.size() << endl;
  for (int i = 0; i < (int) a.size(); i++)
    cout << a[i] << " ";
  cout << endl;
  vector<int> newVec(a.begin() + 2, a.end());
  slice(newVec);*/
  return 0;
}
