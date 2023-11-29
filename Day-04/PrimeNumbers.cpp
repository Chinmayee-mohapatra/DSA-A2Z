#include<bits/stdc++.h>
using namespace std;

void isPrime(int n) {
    int cnt = 0;
    for(int i=1; i*i<=n; i++) {
        if(n%i == 0){
            cnt++;
            if(n/i != i) cnt++;
        }
    }

    if (cnt == 2) cout<<n<< " is Prime";
    else cout<<n<< " is not prime";
}

int main() {
    int n;
    cin>> n;

    isPrime(n);

    return 0;
}