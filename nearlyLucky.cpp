#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  string n;
  cin >> n;

  int count = 0;
  for (int i = 0; i < (int)n.length(); i++) {
    if (n[i] == '4' || n[i] == '7')
      count++;
  }

  if (count == 4 || count == 7) {
    cout << "YES";
  }
  else
    cout << "NO";

  cout << endl;
  return 0;
}
