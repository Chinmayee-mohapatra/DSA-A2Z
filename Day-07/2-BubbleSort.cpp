#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int size){
    for(int i=(size-1); i>0; i--){
        int didSwap = 0;
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        if(!didSwap){
            break;
        }
    }
}

int main() {
    int arr[6];

    for(int i=0; i<6; i++){
        cin >> arr[i];
    }

    bubbleSort(arr, 6);
    cout<<"After bubble sort Array:";

    for(int i=0; i<6; i++){
        cout << arr[i] << " " ;
    }

    return 0;
}