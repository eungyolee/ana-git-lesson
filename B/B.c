#include <stdio.h>

#define MAX_ITEMS 100
#define MAX_MONEY 10000

int max(int a, int b) {
	return a > b ? a : b;
}

void readInput(int *M, int *P, int *T, int *H, int price[], int happiness[]) {
	scanf("%d %d %d %d", M, P, T, H);
	for (int i = 0; i < *T; i++) {
		scanf("%d %d", &price[i], &happiness[i]);
	}
}

int calculateMaxHappiness(int M, int T, int price[], int happiness[]) {
	int dp[MAX_MONEY + 1] = {0}; // dp[i]: i원을 쓸 때 얻을 수 있는 최대 행복도

	for (int i = 0; i < T; i++) {
		for (int j = M; j >= price[i]; j--) {
			dp[j] = max(dp[j], dp[j - price[i]] + happiness[i]);
		}
	}

	return dp[M];
}

void printResult(int maxHappiness, int P, int H) {
	int totalHappiness = P + maxHappiness;
	printf("%d\n", totalHappiness);
	if (totalHappiness >= H) {
		printf("yes\n");
	} else {
		printf("no\n");
	}
}

int main() {
	int M, P, T, H;
	int price[MAX_ITEMS], happiness[MAX_ITEMS];

	readInput(&M, &P, &T, &H, price, happiness);
	int maxHappiness = calculateMaxHappiness(M, T, price, happiness);
	printResult(maxHappiness, P, H);

	return 0;
}