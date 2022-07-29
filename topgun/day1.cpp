
#include <bits/stdc++.h>
using namespace std;



void first(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << i + 1;
		}
		cout << '\n';
	}
}

void second(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << j + 1;
		}
		cout << '\n';
	}
}

void third(int n) {
	int count = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << count << " ";
			count++;
		}
		cout << '\n';
	}
}

void fourth(int n) {
	for (int i = 0; i < n; i++) {
		int curr = i + 1;
		for (int j = 0; j < n; j++) {
			if (j <= i)
				cout << curr--;
			else
				cout << " ";

		}
		cout << " ";
		curr = 1;
		for (int j = n; j > 0; j--) {
			if (j <= i + 1)
				cout << curr++;
			else
				cout << " ";

		}
		cout << endl;
	}
}

void fifth(int n) {
	for (int i = 0; i < n; i++) {
		int curr = n - i;
		for (int j = 0; j < n; j++) {
			if (j + 1 > i) cout << curr--;
			// else cout << "*";
		}
		cout << endl;
	}
}

void last(int n) {
	for (int i = n; i > 0; i--) {
		int temp = n - i + 1;
		for (int j = 0; j < n; j++) {
			if (j < i) cout << temp++;
			else cout << " ";
		}
		cout << " ";
		int cu = n;
		for (int j = 0; j < n; j++) {
			if (j >= n - i) cout << cu--;
			else cout << " ";
		}
		cout << endl;
	}
}

void quad(int n) {

	for (int i = 0; i <  n; i++) {
		int temp = 1;
		for (int j = 1; j < n + 1; j++) {
			if (j >= n - i) cout << temp++ << " ";
			else cout << "  ";
		}
		temp -= 2;
		for (int j = 0; j < n - 1; j++) {
			if (j < i) cout << temp-- << " ";
			else cout << "  ";
		}
		cout << endl;

	}

	for (int i = 0; i < n - 1; i++) {
		int temp = 1;
		for (int j = 0; j < n; j++) {
			if (j > i) cout << temp++ << " ";
			else cout << "  ";
		}

		temp -= 2;
		for (int j = 0; j < n - 1; j++) {
			if (j < n - i - 2) cout << temp-- << " ";
			else cout << "  ";
		}

		cout << endl;
	}

}


void damn(int n ) {

	for (int i = 0; i < 2 * n; i++) {
		int temp = n;


		if ( i < n) {

			for (int j = 0; j < 2 * n - 1; j++) {
				if (j >= n - i - 1 && j < n) {
					cout << temp-- << " ";
				} else {
					if (temp < n - 1)
					{
						cout << temp - 1 << " ";
						temp--;
					}
					else cout << "*" << " ";
				}

			}
			cout << endl;

		}

	}
}


void chakravyuha() {
	// vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
	vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int left = 0, right = arr[0].size() - 1, up = 0, down = arr.size() - 1;

	vector<int> ans;
	int row, col;

	while (left <= right && up <= down) {
		for (col = left; col <= right; col++) {
			ans.push_back(arr[up][col]);
		}
		up++;
		for (row = up; row <= down; row++) {
			ans.push_back(arr[row][right]);
		}
		right--;
		for (col = right; col >= left; col--) {
			ans.push_back(arr[down][col]);
		}
		down--;
		for (row = down; row >= up; row--) {
			ans.push_back(arr[row][left]);
		}
		left++;
	}

	for (int i : ans) cout << i << " ";
}

int main()
{


	chakravyuha();

	return 0;
}


