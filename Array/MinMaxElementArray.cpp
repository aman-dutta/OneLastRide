#include <bits/stdc++.h>
using namespace std;

struct Pair{
    int max; 
    int min;
};

struct Pair getMinMax(int arr[], int n){
        struct Pair result;
        
        if(n == 1){
            result.max = arr[0];
            result.min = arr[0];
            return result;
        }

        int i;
        if(n%2 == 1){
            result.max = arr[0];
            result.min = arr[1];
            i = 1;
        }else{
            if(arr[0] > arr[1]){
                result.max = arr[0];
                result.min = arr[1];
            }else{
                result.max = arr[1];
                result.min = arr[0];
            }
            i=2;
        }

        while(i<n){
            if(arr[i] > arr[i+1]){
                if(arr[i] > result.max) result.max = arr[i];
                if(arr[i+1] < result.min) result.min = arr[i+1];
            }else{
                if(arr[i+1] > result.max) result.max = arr[i+1];
                if(arr[i] < result.min) result.min = arr[i];
            }
            i = i+2;
        }
        return result;
};

int main(){
        int arr[] = { 1000, 11, 445, 1, 330, 3000 };
        int n = sizeof(arr)/sizeof(arr[0]);

       Pair result = getMinMax(arr, n);
       cout<<result.max<<" "<<result.min<<endl;
}