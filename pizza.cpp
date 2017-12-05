// Brute force
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int minDiff(int V, int P, vector<int> pizza)
{
  int totalPieces = V + P;
  int limitV;
  int totalV;
  int limitP;
  int totalP;
  int diff;
  int smallest = 0;
  for (int i = 0; i < totalPieces; i++)
  {
    limitV = i + V;
    limitP = limitV + P;
    totalV = 0;
    totalP = 0;
    for (int j = i; j < limitV; j++)
    {
      totalV += pizza[j % totalPieces];
    }
    for (int j = limitV; j < limitP; j++)
      totalP += pizza[j % totalPieces];
    diff = abs(totalV - totalP);
    // cout << "Debug " << endl;
    // cout << "totalV = " << totalV << endl;
    // cout << "totalP = " << totalP << endl;
    // cout << "diff = " << diff << endl;
    if (smallest == 0)
      smallest = diff;
    else
      if (diff < smallest)
        smallest = diff;
      if (diff == 0)
        return diff;
  }
  return smallest;
}

int main()
{
  // Get pizza
  vector<int> pizza;
  int n;
  int piece;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> piece;
    pizza.push_back(piece);
  }

  // Get minimum difference
  int min = 0;
  int localMin;
  if (n == 1)
    min = pizza[0];
  else
  {
    for (int i = 1; i <= n / 2; i++)
    {
      localMin = minDiff(i, n - i, pizza);
      // cout << "Debug " << endl;
      // cout << "localMin = " << localMin << endl;
      if
      (min == 0)
        min = localMin;
      else
        if (localMin < min)
          min = localMin;
      if (min == 0)
        break;
    }
  }
  cout << min << endl;
  return 0;
}
