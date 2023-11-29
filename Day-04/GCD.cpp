#include<bits/stdc++.h>
using namespace std;

void gcd(int a, int b) {

    while(a>0 && b>0){
        if(a>b)
            a = a%b;
        else 
            b = b%a;
    }
    
    if(a == 0) cout<<"GCD = "<<b;
    else cout<<"GCD = "<<a;
    
}

int main() {
    int a,b;
    cin>> a >> b;

    gcd(a, b);

    return 0;
}