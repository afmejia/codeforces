#include <iostream>

using namespace std;

int main() {
  int i, p, q;
  cin >> i;

  // For each room check if possible accomodate them
  int count = 0;
  for (int j = 0; j < i; j++) {
    cin >> p >> q;
    if (q - p >= 2)
      count ++;
  }
  cout << count << endl;
  return 0;
}
