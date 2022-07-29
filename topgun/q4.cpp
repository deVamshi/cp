#include <bits/stdc++.h>
using namespace std;

int main() {

	vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 7};

	bool metN1 = false, metN2 = false;
	int N1 = 4, N2 = 7;
	string concat = "";
	int sum = 0;

	for (int i = 0; i < arr.size(); i++) {
		
		if (arr[i] == N1) { 
			metN1 = true;
			concat += to_string(arr[i]);
			continue;
		}
		if (arr[i] == N2) {
			metN2 = true;
			concat += to_string(arr[i]);
			continue;
		}

		if ((metN1 && metN2) || (!metN1 && !metN2)) {
			sum += arr[i];
		} else {
			concat += to_string(arr[i]);
		}

		
	}

	cout << sum ;

	return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main() {

	vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 7};

	bool metN1 = false, metN2 = false;
	int N1 = 4, N2 = 7;
	string concat = "";
	int sum = 0;

	int start = 0, end = arr.size() - 1;

	if (arr[0] == N1) metN1 = true;
	if (arr[end] == N2) metN2 = true;

	while (!metN1 || !metN2) {

		if (arr[start] == N1 || metN1) {
			metN1 = true;
			continue;
		}

		if (arr[start] == N2 || metN2) {
			metN2 = true;
			continue;
		}

		sum += arr[start++];
		sum += arr[end--];

	}

	// for (int i = 0; i < arr.size(); i++) {

	// 	if (arr[i] == N1) {
	// 		metN1 = true;
	// 		concat += to_string(arr[i]);
	// 		continue;
	// 	}
	// 	if (arr[i] == N2) {
	// 		metN2 = true;
	// 		concat += to_string(arr[i]);
	// 		continue;
	// 	}

	// 	if ((metN1 && metN2) || (!metN1 && !metN2)) {
	// 		sum += arr[i];
	// 	} else {
	// 		concat += to_string(arr[i]);
	// 	}


	// }

	cout << sum ;

	return 0;
}