#include <iostream>

using namespace std;

int main() {
	int hamA, hamB, hamC;
	int juiA, juiB;

	cin >> hamA >> hamB >> hamC >> juiA >> juiB;

	int minH = (hamA > hamB ? hamB : hamA) > hamC ? hamC : (hamA > hamB ? hamB : hamA);
	int minJ = juiA > juiB ? juiB : juiA;

	cout << minH + minJ - 50;

	return 0;
}

// https://www.acmicpc.net/problem/5543
// ��     �� : ������ main�� int�� �ؾ��Ѵ�.
// �ɸ� �ð� : 0ms