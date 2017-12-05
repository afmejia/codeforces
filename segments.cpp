#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, x, k;
  cin >> n >> x >> k;

  // Fill array with n values
  vector<int> arr;
  int element;
  for (int i = 0; i < n; i++)
  {
    cin >> element;
    arr.push_back(element);
  }

  // Sort array
  sort(arr.begin(), arr.end());

  // Get all possible pairs
  for (int i = 0; i < n, i++)
    for (int j = 0; j < n; j++)
    {

    }

  /*for (int i = 0; i < n; i++)
  {
    cout << "Debug arr[" << i << "] = " << arr[i] << endl;
    arr.push_back(element);
  }*/
  return 0;
}
