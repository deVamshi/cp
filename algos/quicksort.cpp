#include <bits/stdc++.h>

using namespace std;

void swapArr(int arr[], int first, int sec) {

	int temp = arr[first];
	arr[first] = arr[sec];
	arr[sec] = temp;
	
}

int partition(int arr[], int l, int r) {

	int pivot = arr[r];
	int i = l - 1;
	for(int j = l; j < r; j++){
		if(arr[j] < pivot){
			i++;
			swapArr(arr, i, j);
		}
	}

	swapArr(arr, i + 1, r);

	return i + 1;
}

void myQS(int arr[], int l, int r){

	if(l < r) {
		int pi = partition(arr, l , r);
		myQS(arr, l, pi - 1);
		myQS(arr, pi + 1, r);
	}
}


int main()
{
	int arr[] = {3, 6, 9, 10, 23, 24};

	int size = sizeof(arr) / sizeof(arr[0]);

	myQS(arr, 0, size - 1);

	for(int i = 0; i < size; i++) cout << arr[i] << endl;

	return 0;
}

