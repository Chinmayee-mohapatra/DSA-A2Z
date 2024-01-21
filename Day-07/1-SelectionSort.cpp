#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int size){
    int mini;

    for(int i=0; i<=size-2; i++){
        mini = i;
        for(int j=i; j<=size-1; j++){
            if(arr[j] < arr[mini])
                mini = j;
        }
        swap(arr[mini], arr[i]);
    }
}

int main() {
    int arr[6];

    for(int i=0; i<6; i++){
        cin >> arr[i];
    }

    selectionSort(arr, 6);
    cout<<"After selection sort Array:";

    for(int i=0; i<6; i++){
        cout << arr[i] << " " ;
    }

    return 0;
}