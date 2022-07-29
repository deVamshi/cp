#include <bits/stdc++.h>
using namespace std;

struct ListNode {
	int data;
	int exp;
	struct ListNode *next;
};

int main () {

	stack<int> st;

	vector<int> arr;
	int n;
	cout << "Enter no.of elements" << endl;
	cin >> n;

	while(n--) {
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}


	



	return 0;
}


