#include<bits/stdc++.h>
using namespace std;

int countDigits(int n) {
  int cnt = 0;

  // way - 1
  /*
  while(n>0) {
    int lastDigit = n%10;
    cnt ++;
    n = n/10;
  }
  */

  // Way - 2
  cnt = (int)(log10(n)+1);

  return cnt;
}

int main() {
  int n;
  cin >> n;

  cout << "No of digits in "<<n<< " = "<<countDigits(n);

  return 0;
}