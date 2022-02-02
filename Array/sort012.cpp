#include <bits/stdc++.h>
using namespace std;


void sort012(int arr[], int n){
    int i=0,j=0, k = n-1;

    while(j<k){
        if(arr[j] == 0){
            swap(arr[i],arr[j]);
            j++;
            i++;
        }else if(arr[j] == 1){
            j++;
        }else{
            swap(arr[j],arr[k]);
            k--;
        }
    }

    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}

int main(){
    int arr[] = {0,2,1,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort012(arr,n);

}