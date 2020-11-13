#include <iostream>

using namespace std;

int main() {
	int k, s; cin >> k >> s;

	bool able {};
	int ans {};
	for(size_t i = 0; i < s; i++) {
		int temp; cin >> temp;
		if(temp < k) ans += temp;
		else {
			able = true;
			ans += k - 1;
		}
	}

	if (!able) cout << -1 << endl;
	else cout << ans + 1 << endl;
	return 0;
}
