#include <iostream>

using namespace std;

int main() {
	int n, result = 0, sum, k;
	int arr[4];

	cin >> n;
	
	if (n < 100) result = n;
	else {
		for (int i = 0; i < n; i++) {
			if (i == 1000) break;
			else if (n >= 99) {
				i = 100;
				result = 99;
			}
			else {
				sum = i;
				k = 0;

				while (sum != 0) {
					arr[k] = sum % 10;
					sum /= 10;
					k++;
				}

				if (arr[0] - arr[1] == arr[2] - arr[3]) result++;
			}
		}
	}


	printf("%d", result);

	return 0;
}

// 문     제 : https://www.acmicpc.net/problem/1065
// 걸린 시간 : 
// 참     고 : http://blog.naver.com/occidere/220790000403