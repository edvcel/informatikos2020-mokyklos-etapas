#include <iostream>

using namespace std;

int main() {
	int n, k; cin >> n >> k;

	for(size_t i = 0; i < n; i++) {
		int temp; cin >> temp;
		if(temp == k) {
			cout << i + 1 << endl;
			return 0;
		}
	}
	return 0;
}