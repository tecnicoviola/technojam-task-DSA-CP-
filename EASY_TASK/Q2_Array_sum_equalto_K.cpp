//Given an array of N integers, and an integer K, the task is to find the number of pairs of integers in the array whose sum is equal to K.
#include<iostream>
using namespace std;

int main()
{
    int arr[] = { 1, 5, 7, -1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int K = 6;
    cout << "number of pair is:"<< sum(arr, n, K);
    return 0;
}

    int sum(int arr[], int n , int k){
        int count = 0;
        for(int i=0; i<n; i++){
            for(int j=1; j<n; j++){
                if(arr[i]+arr[j] == k){
                    count++;
                 }
            }    
        }
        return count;
    }
