#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	auto ax = (a - 1) / 4;
	auto ay = (a - 1) % 4;

	auto bx = (b - 1) / 4;
	auto by = (b - 1) % 4;

	auto dist = abs(ax - bx) + abs(ay - by);
	cout << dist;

	return 0;
}