#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	auto ais = vi(n);
	for (auto i = 0; i < n; ++i) {
		cin >> ais[i];
	}

	int m;
	cin >> m;
	while (0 < (m--)) {
		int k, l, r;
		cin >> k >> l >> r;

		if (1 == k) {
			for (auto i = l - 1; i < r; ++i) {
				ais[i] *= ais[i];
				ais[i] %= 2010;
			}
		}
		else if (2 == k) {
			auto ans = int{ 0 };
			for (auto i = l - 1; i < r; ++i) {
				ans += ais[i];
			}

			cout << ans << '\n';
		}
	}

	return 0;
}