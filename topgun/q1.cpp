#include <bits/stdc++.h>
using namespace std;

int main() {
	string arr = "11111";

	string ans = "";

	for(int j = 0; j < arr.size(); j++) {
		int i = arr[j] - '0';
		if(j % 2 != 0){
			ans += to_string(i * i);
			if(ans.size() >= 4) break;
		}
	}

	while(ans.substr(0, 4).size() < 4) ans += "0";
	
	cout << ans.substr(0, 4) << endl;

	return 0;
}