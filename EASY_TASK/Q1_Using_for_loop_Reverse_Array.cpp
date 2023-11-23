#include <iostream>
using namespace std;

void reverse(int arr[], int n) {  //function made named reverse this is void so it has no return type
    int start = 0;   
    int end = n - 1;
    }

int main() {  //driver code
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); //sizeof(arr) tells the size of the array  
    cout << "Previous array: ";
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    reverse(arr, n);  //reverse function is called here

    cout << "Reversed array: ";
    for (int i = n-1; i >=0; i--) { //prints reverse array
        cout << arr[i] << " ";
    }

    return 0;
}
