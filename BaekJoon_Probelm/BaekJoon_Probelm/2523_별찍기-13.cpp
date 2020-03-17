#include <iostream>	

using namespace std;

int main() {
	int cnt;

	cin >> cnt;

	for (int i = 1; i <= cnt; i++) {
		for (int j = 0; j < i; j++) {
			cout << '*';
		}
		cout << endl;
	}

	for (int i = cnt; 0 < i; i--) {
		for (int j = 1; j < i; j++) {
			cout << '*';
		}
		cout << endl;
	}

	return 0;
}

// https://www.acmicpc.net/problem/2523
// 걸린 시간 : 8 ms