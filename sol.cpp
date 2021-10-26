#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, x, p;
		cin >> n >> x >> p;
		// find the total marks of Chef and subtract it to the incorrect questions
		cout << ((3 * x) - (n - x) >= p ? "PASS" : "FAIL") << '\n';
	}
	return 0;
}
