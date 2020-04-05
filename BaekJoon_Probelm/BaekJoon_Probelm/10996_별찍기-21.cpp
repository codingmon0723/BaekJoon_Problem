#include <iostream>
#include <string>

using namespace std;

int main() {
	int cnt;
	bool flag = false;

	cin >> cnt;

	if (cnt == 1) cout << '*';

	else {
		/*for (int i = 0; i < cnt * 2; i++) {
			for (int j = 0; j < cnt; j++) {
				if (flag) cout << ' ';
				else cout << '*';

				flag = !flag;
			}
			if (cnt % 2 == 0) flag = !flag;
			cout << endl;
		}*/

		string a, b;

		for (int i = 0; i < cnt; i++) {
			if (flag) {
				a += ' ';
				b += '*';
			}
			else {
				a += '*';
				b += ' ';
			}

			flag = !flag;
		}

		for (int i = 0; i < cnt; i++) {
			cout << a << endl << b << endl;
		}
	}

	return 0;
}

// 문     제 : https://www.acmicpc.net/problem/10996
// 걸린 시간 : 8 ms