#include <iostream>

using namespace std;

int main() {
	int cnt;

	cin >> cnt;

	int line = cnt * 2 - 1;
	int blank = 0;

	for (int i = 0; i <= line; i++) {
		if (i < cnt) {
			for (int j = 0; j < blank; j++) {
				cout << ' ';
			}
			for (int j = 0; j < line - blank * 2; j++) {
				cout << '*';
			}
			for (int j = 0; j < blank; j++) {
				cout << ' ';
			}
			blank++;
		}
		else if (i == cnt) {
			blank--;
			continue;
		}
		else {
			blank--;
			for (int j = 0; j < blank; j++) {
				cout << ' ';
			}
			for (int j = 0; j < line - blank * 2; j++) {
				cout << '*';
			}
			for (int j = 0; j < blank; j++) {
				cout << ' ';
			}
		}
		if (i < line)
			cout << endl;
	}

	return 0;
}

// https://www.acmicpc.net/problem/2446
// 걸린 시간 : 