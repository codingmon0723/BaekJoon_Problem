#include <iostream>

using namespace std;

int main() {
	int h, m;

	cin >> h >> m;

	int time = h * 60 + m - 45;

	if (time < 45 && time != 0) time += 24 * 60;

	cout << time / 60 << ' ' << time % 60;

	return 0;
}

// 문     제 : https://www.acmicpc.net/problem/2884
// 실패