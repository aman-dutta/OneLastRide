#include <bits/stdc++.h>
using namespace std;

//Using recursion

void reverseArray(int arr[], int start, int end){
    if(start >= end) return;  //Base condition of the recursive function
    else{
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        //Calling the recursive function
        reverseArray(arr,start+1, end-1);
    }
}

int main(){
    int arr[] ={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    reverseArray(arr,0,n-1);
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
}