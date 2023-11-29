#include<bits/stdc++.h>
using namespace std;

int revNumber(int n) {
  int num = 0;

  while(n>0) {
    int lastDigit = n%10;
    num = (num*10) + lastDigit;
    n = n/10;
  }

  return num;
}

int main() {
  int n;
  cin >> n;

  cout << "Reverse of "<<n<< " = "<<revNumber(n);

  return 0;
}