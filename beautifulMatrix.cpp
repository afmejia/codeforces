#include <iostream>

using namespace std;

int main() {
  int i, j, element, posi, posj;
  for (i = 1; i <= 5; i++)
    for (j = 1; j <= 5; j++) {
      cin >> element;
      if (element == 1) {
        posi = i;
        posj = j;
      }
    }

  int ans = abs(posi - 3) + abs(posj - 3);
  cout << ans << endl;
  return 0;
}
