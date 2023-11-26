/**
Pattern - 1

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
*/

/**
Pattern - 2

*
* *
* * *
* * * *
* * * * *
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
*/

/*
Pattern - 3

1
12
123
1234
12345
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            cout << j+1 << " ";
        }
        cout << endl;
    }

    return 0;
}
*/

/*
Pattern - 4

1
22
333
4444
55555
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            cout << i+1 << " ";
        }
        cout << endl;
    }

    return 0;
}
*/

/*
Pattern - 5

*****
****
***
**
*
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<(n-i); j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
*/

/*
Pattern - 6

12345
1234
123
12
1
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<(n-i); j++) {
            cout << j+1 << " ";
        }
        cout << endl;
    }

    return 0;
}
*/


/*
Pattern - 7

j=   0 1 2 3|k=i -> #stars
i=0        *|
i=1      * *|*
i=2    * * *|* *
i=3  * * * *|* * *
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for (int i=0; i<n; i++) {
        int j=0;
        while (j<(n-i-1)) {
            cout << "  "; // space
            j++;
        }

        while( j>=(n-i-1) && j<n) {
            cout << "* "; // stars
            j++;
        }

        int k = i;
        while(k>0) {
            cout<< "* "; // stars
            k--;
        }
        cout << endl;
    }

    return 0;
}
*/


/*
Pattern - 8

*********
 *******
  *****
   ***
    *
#stars = 2n-(2i+1)
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for (int i=0; i<n; i++) {
        int j=i;
        while(j>0) {
            cout << "  ";
            j--;
        }

        j=(n-i);
        while(j>0) {
            cout << "* ";
            j--;
        }

        int k=0;
        while(k<(n-i-1)) {
            cout << "* ";
            k++;
        }
        cout<< endl;
    }

    return 0;
}
*/


/*
Pattern - 9

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for (int i=0; i<n; i++) {
        int j=0;
        while (j<(n-i-1)) {
            cout << "  "; // space
            j++;
        }

        while( j>=(n-i-1) && j<n) {
            cout << "* "; // stars
            j++;
        }

        int k = i;
        while(k>0) {
            cout<< "* "; // stars
            k--;
        }
        cout << endl;
    }

    for (int i=0; i<n; i++) {
        int j=i;
        while(j>0) {
            cout << "  ";
            j--;
        }

        j=(n-i);
        while(j>0) {
            cout << "* ";
            j--;
        }

        int k=0;
        while(k<(n-i-1)) {
            cout << "* ";
            k++;
        }
        cout<< endl;
    }

    return 0;
}
*/

/*
Pattern - 10

*
**
***
****
*****
****
***
**
*

*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for (int i=0; i<n; i++) {
        int j=0;
        while(j<i+1 && j<n) {
            cout<< "* ";
            j++;
        }
        cout<<endl;
    }
    for (int i=0; i<n-1; i++) {
        int j=0;
        while(j<(n-i-1)) {
            cout<< "* ";
            j++;
        }
        cout<<endl;
    }

    return 0;
}
*/


/*
Pattern - 11

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, flag;
    cin >> n;

    for (int i=0; i<n; i++) {
        if(i%2==0) {
            flag = 1;
        } else {
            flag = 0;
        }
        for (int j=0; j<(i+1); j++) {
            cout << flag << " ";
            flag = !(flag);
        }
        cout << endl;
    }

    return 0;
}
*/


/*
Pattern - 12

1      1
12    21
123  321
12344321
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int stars = ((n-1)*2);

    for(int i=0; i<n; i++){
        int k=1;
        for(int j=0; j<=i; j++) {
            cout<<k;
            k++;
        }
        for(int j = stars; j>0; j-=1){
            cout<<" ";
        }
        for(int p=k-1; p>=1; p--) {
            cout<<p;
        }
        stars -= 2;
        cout<<endl;
    }

    return 0;
}
*/


/*
Pattern - 13

1
2 3
4 5 6 
7 8 9 10
11 12 13 14 15
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int ele = 1;
    cin>>n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<(i+1); j++) {
            cout << ele << " ";
            ele++;
        }
        cout<<endl;
    }

    return 0;
}
*/


/*
Pattern - 14

A
AB
ABC
ABCD
ABCDE

*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        char ele = 'A';
        for(int j=0; j<(i+1); j++){
            cout<< ele<< " ";
            ele += 1;
        }
        cout<<endl;
    }

    return 0;
}
*/

/*
Pattern - 15

ABCDE
ABCD
ABC
AB
A

*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        char ele = 'A';
        for(int j=0; j<(n-i); j++) {
            cout<< ele << " ";
            ele += 1;
        }
        cout<<endl;
    }

    return 0;
}
*/


/*
Pattern - 16

A
BB
CCC
DDDD
EEEEE

*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char ele = 'A';
    cin>>n;

    for(int i=0; i<n; i++) {
        for(int j=0; j<(i+1); j++) {
            cout<< ele << " ";
        }
        ele += 1;
        cout<<endl;
    }

    return 0;
}
*/

/*
Pattern - 17
 
   A
  ABA
 ABCBA
ABCDCBA

*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        char k = 'A';
        int j=0;
        while(j<(n-i-1)) {
            cout<<" ";
            j++;
        }

        while(j>=(n-i-1) && j<n) {
            cout<< k;
            k+=1;
            j+=1;
        }

        int p=i; 
        k='A'+i-1;
        while(p>0) {
            cout<<k;
            k-=1;
            p-=1;
        }
        cout<<endl;
    }

    return 0;
}
*/


/*
Pattern - 18

E
DE
CDE
BCDE
ABCDE

*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        char ch = 'A'+(n-i-1);
        for(int j=0; j<=i; j++) {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }

    return 0;
}
*/


/*
Pattern - 19

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for( int i=0; i<n; i++ ){
        for( int j=0; j<(n-i); j++ ){
            cout<<"*";
        }
        for( int j=(n-i); j<n; j++ ){
            cout<<" ";
        }
        for( int j=0; j<i; j++ ){
            cout<<" ";
        }
        for( int j=0; j<(n-i); j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
    for( int i=0; i<n; i++ ){
        for( int j=0; j<=i; j++ ){
            cout<<"*";
        }
        for( int j=(n-i-1); j>0; j-- ){
            cout<<" ";
        }
        for( int j=0; j<(n-i-1); j++ ){
            cout<<" ";
        }
        for( int j=0; j<=i; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
*/


/*
Pattern - 20

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for( int i=0; i<n; i++ ){
        for( int j=0; j<=i; j++ ){
            cout<<"*";
        }
        for( int j=(n-i-1); j>0; j-- ){
            cout<<" ";
        }
        for( int j=0; j<(n-i-1); j++ ){
            cout<<" ";
        }
        for( int j=0; j<=i; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
    for( int i=0; i<n; i++ ){
        for( int j=0; j<(n-i-1); j++ ){
            cout<<"*";
        }
        for( int j=(n-i-1); j<n; j++ ){
            cout<<" ";
        }
        for( int j=0; j<i+1; j++ ){
            cout<<" ";
        }
        for( int j=0; j<(n-i-1); j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
*/


/*
Pattern - 21

****
*  *
*  *
****
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || i==(n-1) || j==0 || j==(n-1)) {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
        cout<< endl;
    }

    return 0;
}
*/


/*
Pattern - 22

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4 
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=0; i<(2*n-1); i++) {
        for(int j=0; j<(2*n-1); j++) {
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int bottom=(2*n-2)-i;
            int dist = n-min(min(top,left), min(right, bottom));
            cout<<dist<<" ";
        }
        cout<<endl;
    }

    return 0;
}