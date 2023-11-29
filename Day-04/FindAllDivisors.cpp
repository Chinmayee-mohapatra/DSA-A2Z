#include<bits/stdc++.h>
using namespace std;

vector<int> printDivisors(int n) {
  vector<int> divisorList = {};

  // i <= sqrt(n) === i*i <= n
  for (int i = 1; i*i <= n; i++) {
    if (n % i == 0) {
      divisorList.push_back(i); 
      if(n/i != i) {
          divisorList.push_back(n/i);
      }
    }
  }

  sort(divisorList.begin(), divisorList.end());
  return divisorList;
}

int main() {

    vector<int> newList = printDivisors(36);

    for(int i=0; i<newList.size(); i++) {
        cout << newList[i] << " ";
    }

    return 0;
}