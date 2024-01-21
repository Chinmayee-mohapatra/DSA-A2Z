#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left<=mid && right<=high) {
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while(right<=high) {
        temp.push_back(arr[right]);
        right++;
    }

    
    
}

void mergeSort(int arr[], int low, int high){
    if(low>=high) return;

    int mid = (low+high)/2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main() {
    int arr[6];

    for(int i=0; i<6; i++){
        cin >> arr[i];
    }

    mergeSort(arr, 0, 6);
    cout<<"After Merge sort Array:";

    for(int i=0; i<6; i++){
        cout << arr[i] << " " ;
    }

    return 0;
}