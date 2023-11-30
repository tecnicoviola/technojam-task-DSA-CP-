#include<iostream>
using namespace std;

void findMissing(int arr[], int num)
{
	int i;
	int temp[num + 1];
	for(int i = 0; i <= num; i++){
	temp[i] = 0;
	}
	for(i = 0; i < num; i++){
	temp[arr[i] - 1] = 1;
	}
	int ans;
	for (i = 0; i <= num ; i++) {
		if (temp[i] == 0)
			ans = i + 1;
	}
	cout << ans;
}

int main()
{
	int arr[] = { 1, 3, 7, 5, 6, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	findMissing(arr, n);
}
