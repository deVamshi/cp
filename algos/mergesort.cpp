#include <bits/stdc++.h>
using namespace std;


void merge(int arr[], int low, int mid, int high)
{
	int n1 = mid - low + 1;
	int n2 = high - mid;
	int temp1[n1 + 1];
	int temp2[n2 + 1];

	for (int i = 0; i < n1; ++i) {
		temp1[i] = arr[low + i];
	}

	for (int i = 0; i < n2; ++i) {
		temp2[i] = arr[mid + 1 + i];
	}

	temp1[n1] = temp2[n2] = INT_MAX;

	int p1 = 0, p2 = 0;

	for (int i = low; i <= high; ++i) {
		if (temp1[p1] < temp2[p2]) {
			arr[i] = temp1[p1++];
		} else {
			arr[i] = temp2[p2++];
		}
	}
}

void mergeSort(int arr[], int low, int high)
{
	if (low == high) return;
	int mid = (low + high) / 2;
	mergeSort(arr, low, mid);
	mergeSort(arr, mid + 1, high);
	merge(arr, low, mid, high);
}

int main()
{

	int n;
	cin >> n;
	int arr[n];

	for(int i = 0; i < n; i++) cin >> arr[i];

	mergeSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) cout << arr[i] << " ";

	return 0;
}

