#include <bits/stdc++.h>
using namespace std;

void calculateSpan(int price[], int n, int S[]){
	stack st;
	st.push(0); s[0] = 1;
	for(int i = 0; i < n; I++){
		while(!st.empty() && price[st.top()] < price[i]) st.pop();
		s[i] = st.empty() ? i + 1 : i - st.top();
		st.push(i);
	}
	
}

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


