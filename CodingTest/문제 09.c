#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int* solution(char* shirt_size[], int shirt_size_len) {
	// 동적 할당
	int* answer = malloc(6 * sizeof(int));
	//배열 초기화
	for (int i = 0; i < 6; i++) {
		answer[i] = 0;
	}

	for (int i = 0; i < shirt_size; i++) {
		if (strcmp(shirt_size[i], "XS") == 0)
			answer[0]++;
		else if (strcmp(shirt_size[i], "S") == 0)
			answer[1]++;
		else if (strcmp(shirt_size[i], "M") == 0)
			answer[2]++;
		else if (strcmp(shirt_size[i], "L") == 0)
			answer[3]++;
		else if (strcmp(shirt_size[i], "XL") == 0)
			answer[4]++;
		else if (strcmp(shirt_size[i], "XXL") == 0)
			answer[5]++;
	}

	return answer;
}

int main() {
	char* shirt_size[] = { "XS", "S", "L", "L", "XL", "S" };
	int shirt_size_len = 6;
	int* ret = solution(shirt_size, shirt_size_len);

	printf("solution 함수의 반환 값은 {");
	for (int i = 0; i < 6; i++) {
		if (i != 0) printf(", ");
		printf("%d", ret[i]);
	}
	printf("} 입니다.\n");
}