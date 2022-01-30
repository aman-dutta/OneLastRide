#include <bits/stdc++.h>
using namespace std;

//Using temp variable 
//We can also do this without using temp variable by swappping first and last

void reverseArray(int arr[], int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int arr[] ={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    reverseArray(arr,0,n-1);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}