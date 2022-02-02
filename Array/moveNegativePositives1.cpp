#include <bits/stdc++.h>
using namespace std;


//This is using the 2-pointer approach
void moveNegativesPositives(int arr[], int n){
    int i=0, j= n-1;

    while(i<=j){
        if(arr[i]<0 && arr[j] <0){
            i++;
        }else if(arr[i]>0 && arr[j]<0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }else if(arr[i] <0 && arr[j] > 0){
            i++;
            j++;
        }else{
            j--;
        }
    }

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}

int main(){
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr)/sizeof(arr[0]);

    moveNegativesPositives(arr,n);
}