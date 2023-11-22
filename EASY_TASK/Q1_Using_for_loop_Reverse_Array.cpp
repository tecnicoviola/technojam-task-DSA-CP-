#include <iostream>
using namespace std;

void reverse(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    }

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Previous array: ";
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    reverse(arr, n);

    cout << "Reversed array: ";
    for (int i = n-1; i >=0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}