#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin >> n;
	string s;
	while(n--){
		cin >> s;
		int len = s.size();
		if(len < 11){
			cout << s << endl;
			continue;
		}
		cout << s[0] << len - 2 << s[len - 1] << endl;
	}
	return 0;
}