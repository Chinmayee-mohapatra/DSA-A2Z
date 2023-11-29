#include<bits/stdc++.h>
using namespace std;

void isArmstrong(int num) {
    int n = num, temp = num;
    int newNum = 0;
    int digits = 0;

    while(num > 0) {
        int lastDigit = num%10;
        digits += 1;
        num /= 10;
    }

    while(temp>0) {
        int lastDigit = temp%10;
        newNum = newNum + (pow(lastDigit,digits));
        temp = temp/10;
    }

    if(n == newNum) 
        cout<<n<< " is Armstrong";
    else
        cout<<n<< " is not Armstrong";
    
}

int main() {
  int n;
  cin >> n;

  isArmstrong(n);

  return 0;
}