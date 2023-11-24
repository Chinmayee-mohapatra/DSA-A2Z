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
    
    *
   ***
  *****
 *******
*********
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<(n-i-1); j++) {
            cout << "* "; // space
        }
        cout << endl;
    }

    return 0;
}