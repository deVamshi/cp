#include <bits/stdc++.h>

using namespace std;

void insertionSort(int arr[], int n) {
	for(int i = 1; i < n; i++){
		int current = arr[i];
		int j = i - 1;
		while(arr[j] > current && j >= 0){
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = current;
	}
}

int main()
{
	int arr[] = {4, 1, 2, 4, 6, 10, -1, 0};
	int size = sizeof(arr) / sizeof(*arr);
	insertionSort(arr, size);
	for (int i = 0; i < size; i++) cout << arr[i] << endl;
	return 0;
}

