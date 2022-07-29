#include <bits/stdc++.h>
using namespace std;


int main() {

	vector<int> prices = {2, 100, 150, 120};
	// vector<int> prices = {4, 3, 2, 1};
	// vector<int> prices = {100, 50, 75, 60};

	int maxProfit = 0;
	int minPrice = prices[0];

	for(int currPrice : prices){
		maxProfit = max(currPrice - minPrice, maxProfit);
		minPrice = min(minPrice, currPrice);
	}

	cout << maxProfit;

	return 0;
}
