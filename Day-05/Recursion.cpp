#include<bits/stdc++.h>
using namespace std;

void printName(int n, int cnt) {
    if (n == cnt) 
        return;
    
    cout<< "Chinmayee" << endl;
    printName(n,cnt+1);
}

void printTillN(int n, int cnt) {
    if(n == cnt)
        return;

    cnt++;
    cout << cnt << endl;
    printTillN(n, cnt);
}

void printFromN(int n, int cnt) {
    if(cnt == 0)
        return;

    cout << cnt << endl;
    cnt--;
    printFromN(n, cnt);
}

void printTillN_Backtracking(int n, int cnt) {
    if(cnt == 0)
        return;

    printTillN_Backtracking(n, cnt-1);
    cout << cnt << endl;
}

void printFromN_Backtracking(int n, int cnt) {
    if(cnt == n)
        return;

    cnt++;
    cout << cnt << endl;
    printFromN_Backtracking(n, cnt);
}

int main() {
    int n=5, cnt = 0;

    // printName(n,cnt);
    // printTillN(n, cnt);
    // printFromN(n, n);
    // printTillN_Backtracking(n,n);
    printFromN_Backtracking(n,cnt);

    return 0;
}