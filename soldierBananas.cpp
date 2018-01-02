#include <iostream>

using namespace std;

int main() {
  int k, n, w;
  cin >> k >> n >> w;

  // Get the total amount of money
  int total = 0;
  for (int i = 1; i <= w; i++){
    total += i * k;
  }

  // Get missing money
  if (total > n)
    cout << total - n << endl;
  else
    cout << 0 << endl;
  return 0;
}
