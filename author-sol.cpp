#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b;
		cin >> a >> b;
		if (b == 1) {
			cout << "NO" << '\n';
		} else {
		 	// first expression = a itself (nearly good number)
		 	// second expression = product of a and b (good number)
		 	// third expression = product of a and (b + 1) (nearly good number, because it's not divisible by product of a and b anymore)
		 	// increasing multiples of a
		 	cout << "YES" << '\n';
			cout << a << " " << a * 1LL * b << " " << a * 1LL * (b + 1) << '\n';
		}
	}
	return 0;
}
