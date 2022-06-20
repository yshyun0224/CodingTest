#include <stdio.h>
#include <string.h>

int* solution(char* shirt_size[], int shirt_size_len) {
	int arr[6] = { 0, 0, 0, 0, 0, 0 };
	int* answer = arr;

	for (int i = 0; i < shirt_size; i++) {
		if (strcmp(shirt_size[i], "XS") == 0)
			answer[0]++;
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