#include <stdio.h>
#include <string.h>

void my_strcat(char* str1, char* str2) {
	int str1_len = strlen(str1);
	int str2_len = strlen(str2);
	for (int i = 0; i < str2_len; i++) {
		str1[str1_len + i] = str2[i];
	}
}

int main(void)
{
	char str1[20] = "hello";
	char str2[20] = "yellow";

	//str1의 내용에 str2를 덧붙임
	my_strcat(str1, str2);

	printf("%s", str1);
}