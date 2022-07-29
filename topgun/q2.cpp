#include <bits/stdc++.h>
using namespace std;

int main() {
	string arr = "Abhishek:43848,Mayur:3749,Friends:3949,Yeah:7878";
	string temp;
	stringstream X(arr);
	string ans = "";
	while(getline(X, temp, ',')){

		vector<string> splitted;

		stringstream y(temp);
		string curr;

		while(getline(y, curr, ':')) splitted.push_back(curr);

		int n = splitted[0].size();
		bool found = false;

		while(n > 0){
			for(auto i : splitted[1]) {
				if (n == (i - '0')){
					cout << splitted[0][n - 1];
					found = true;
					break;
				}
			}
			if(found) break;
			n--;
		}
		if(!found) cout << "X";
	}

	return 0;
}