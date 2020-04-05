#include <iostream>
#define N 10001

using namespace std;

bool arr[N];

int solution(int n) {
	int sum = n;

	while (n != 0) {
		sum += n % 10;
		n = n / 10;
	}

	return sum;
}

int main() {

	for (int i = 0; i < N; i++) {
		int idx = solution(i);

		if (idx <= N) arr[idx] = true;
	}

	for (int i = 0; i < N; i++) if (!arr[i]) printf("%d\n", i);

	return 0;
}

// ��     �� : https://www.acmicpc.net/problem/4673
// �ɸ� �ð� : 0 ms
// ��     �� : https://blockdmask.tistory.com/160