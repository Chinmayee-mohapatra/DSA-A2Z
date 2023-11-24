/**
 * C++ syntax

#include<bits/stdc++.h>
using namespace std;

int main() {
    cout << "Hello world";
    return 0;
}

 * header files

<iostream> = Header file used for input/output operations
<math.h> = Header file for doing mathematical operations like min, max, square root, etc.
<string.h> = Header file for doing string operations like finding the length of the string, reversering the string, finding substring, etc
...

<bits/stdc++.h> = Header file that includes every standard library
So instead of adding multiple header files we can just include this file and it works for all.

 * Data types
 
 For storing different values we use different data types.
 *  - int
 *  - long
 *  - long long
 *  - float
 *  - double
 *  - string (for taking strings as input we need to use getline())
 *  - char


 * if else statements

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if(n<24) {
        cout <<"E";
    } else if(n<54) {
        cout<<"D";
    } else if(n<68) {
        cout<<"C";
    } else if(n<80) {
        cout<<"B";
    } else {
        cout<"A";
    }
    
    return 0;
}

 * switch statement

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a value between 1-7 : ";
    cin>>n;

    switch(n) {
        case 1: cout << "Monday";
                break;
        case 2: cout << "Tuesday";
                break;
        case 3: cout << "Wednesday";
                break;
        case 4: cout << "Thursday";
                break;
        case 5: cout << "Friday";
                break;
        case 6: cout << "Saturday";
                break;
        case 7: cout << "Sunday";
                break;
        default: cout << "Invalid Number";
    }

    return 0;
}

 * arrays, string
 * for loop
 * while loop
 * funtions (Pass by Value & Pass by Reference)

#include<bits/stdc++.h>
using namespace std;

void printAll(int arr[], int n) {
    arr[2] = 24;
    for (int i=0; i<n; i++) {
        cout << arr[i];
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Print the arry elements: ";
    printAll(arr, n); // make changes in the actual copy
    cout << arr[2];
    
    return 0;
}

*/

