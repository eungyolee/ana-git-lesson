#include <stdio.h>
#include <string.h>

#define NUM_TIERS 6

const char *tiers[NUM_TIERS] = {"Ruby", "Diamond", "Platinum", "Gold", "Silver", "Bronze"};

int get_tier_score(const char *tier) {
	for (int i = 0; i < NUM_TIERS; i++) {
		if (strcmp(tier, tiers[i]) == 0) {
			return i * 10;
		}
	}
	return 0;
}

int main() {
	int tmddn_score, software_score;
	char tmddn_tier[10], software_tier[10];

	scanf("%s", tmddn_tier);
	scanf("%d", &tmddn_score);
	scanf("%s", software_tier);
	scanf("%d", &software_score);

	tmddn_score += get_tier_score(tmddn_tier);
	software_score += get_tier_score(software_tier);

	if (tmddn_score < software_score) {
		printf("gimanja teukgeomhaera\n");
	} else {
		printf("no\n");
	}

	return 0;
}