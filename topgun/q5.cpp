#include <bits/stdc++.h>
using namespace std;


int solve(vector<int> arr,vector<vector<int>> &ds, vector<int> curr, int size, int &count)
{
	if (size == 0)
	{
		for (int it : curr)
			if (accumulate(curr.begin(), curr.end(), 0) % 5 == 0) count++;
		ds.push_back(curr);
		return 0;

	}

	curr.push_back(arr[size - 1]);
	solve(arr, ds, curr, size - 1, count);
	curr.pop_back();
	solve(arr, ds, curr, size - 1, count);
	return 0;
}


int main() {

	vector<int> arr = {2, 3, 1};
	vector<vector<int>> ds = {};
	int count = 0;
	vector<int> curr;

	solve(arr, ds, curr, arr.size(), count);

	cout << count << endl;

	for(auto sub : ds) {
		for(int ele : sub){
			cout << ele << " ";
		}
		cout << endl;
	}
	return 0;
}
