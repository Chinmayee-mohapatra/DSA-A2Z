#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size){
    int j;

    for(int i=1; i<size; i++){
        j = i;
        while(j>0 && arr[j-1] > arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

int main() {
    int arr[6];

    for(int i=0; i<6; i++){
        cin >> arr[i];
    }

    insertionSort(arr, 6);
    cout<<"After insertion sort Array:";

    for(int i=0; i<6; i++){
        cout << arr[i] << " " ;
    }

    return 0;
}