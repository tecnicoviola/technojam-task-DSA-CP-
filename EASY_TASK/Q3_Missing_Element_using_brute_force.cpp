#include<iostream>
using namespace std;

int findMissing(int arr[], int n);

int main(){
    int arr[] = { 1, 3, 7, 5, 6, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Missing number is: " << findMissing(arr, n) << endl;
    return 0;
}

int findMissing(int arr[], int n){
    for(int i = 0; i < n; i++){
        int flag = 0;
        for(int j = 0; j < n; j++){
            if(arr[j] == i){ 
                flag = 1;
                break;
            } 
        }
        if(flag == 0)
            return i;
    }
    
    return -1; 
}

//tc : O(N^2)


