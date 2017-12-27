#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int T, N, M, G, S, timeG, timeS;
  cin >> T;
  for (int k = 0; k < T; k++) {
    cin >> N >> M >> G >> S;
    timeG = M * G;

    int found = 0;
    int i = 1;
    int j = N;
    int pos;
    timeS = 0;

    while (found == 0)
    {
      pos = (i + j) / 2;
      if (pos > M) {
        j = pos - 1;
        timeS += S;
      }
      else if (pos < M) {
        i = pos + 1;
        timeS += S;
      }
      else {
        timeS += S;
        found = 1;
      }
    }

    if (timeG < timeS)
      cout << "1";
    else if (timeG > timeS)
      cout << "2";
    else
      cout << "0";
    cout << endl;
  }
  return 0;
}
