#include <bits/stdc++.h>
using namespace std;

int main() {
	string arr = "Abhishek:7878,Mayur:7878,Friends:3949,Yeah:7878";
	string temp;
	stringstream X(arr);
	string ans = "";
	
	while(getline(X, temp, ',')){

		vector<string> splitted;

		stringstream y(temp);
		string curr;

		while(getline(y, curr, ':')) splitted.push_back(curr);

		int add = 0;

		for(auto i : splitted[1]) add += (i - '0') * (i - '0');

		if(!(add & 1)) {
			ans += splitted[0].substr(2);
			ans += splitted[0].substr(0, 2);
		} else ans += splitted[0];
		
		ans += ":" + splitted[1] + ",";
		
	}

	cout << ans;

	return 0;
}