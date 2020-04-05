#include <iostream>
#include <string>

using namespace std;

string strArray[101];

int main() {
	int cnt;

	cin >> cnt;

	int line = cnt * 2 - 1;

	string str = "";

	for (int i = 0; i < line; i++) str += '*';

	strArray[0] = str;

	for (int i = 0; i < line / 2; i++) {
		str[i] = ' ';
		str[line - i - 1] = NULL;
		strArray[i + 1] = str;
	}

	for (int i = 0; i < line / 2; i++) cout << strArray[i] << endl;
	for (int i = line / 2; i > -1; i--) {
		cout << strArray[i];
		if (i != 0) cout << endl;
	}

	return 0;
}

// 문     제 : https://www.acmicpc.net/problem/2446
// 실패