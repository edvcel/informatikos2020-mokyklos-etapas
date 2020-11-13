#include <iostream>

using namespace std;

int main() {
    int n, k; cin >> n >> k;

	int holiday {}; cin >> holiday; holiday--; k--;
	int sum {};
	bool wash {true};

	for(size_t i = 0; i < n; i++) {
		if(holiday == i) {
			if(k > 0) {
				cin >> holiday; holiday--;
				k--;
			}
			sum++;
			wash = false;
			continue;
		}

		if(wash) {
			sum++;
			wash = false;
		} else wash = true;
	}


	cout << sum << endl;
	return 0;
}