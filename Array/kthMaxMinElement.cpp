#include <bits/stdc++.h>
using namespace std;


void findTheKthMaxMin(int arr[], int n, int k){
    priority_queue<int> p;  //Stores the element in ascending order
    //For finding the value kth max element use priority<int, vector<int> greater<int>> p;

    for(int i=0; i<n; i++){
        p.push(arr[i]);
    }

    while(k!=0){
        p.pop();
        k--;
    }

    cout<<p.top()<<endl;
}

int main(){
    int arr[] = {7,10,4,3,20,15};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);

    findTheKthMaxMin(arr,n,k);
}