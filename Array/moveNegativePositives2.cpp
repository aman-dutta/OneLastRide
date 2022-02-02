#include <bits/stdc++.h>
using namespace std;

void moveNegativesPositives(int arr[], int n){
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            if(i != j){
                swap(arr[i],arr[j]);
            }
            j++;
        }
    }

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}

int main(){
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr)/sizeof(arr[0]);

    moveNegativesPositives(arr,n);
}