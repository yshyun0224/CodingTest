#include <string.h>
#include <stdio.h>

int main(void) {
	//배열은 20개, 문자길이는 3
	char str[20] = "YSY";
	
	//문자의 길이를 구하는 함수
	int length = strlen(str);
	printf("%d \n", length);

	//문자열 복사 strcpy(복사공간, 복사대상)
	char copy_str[15];
	strcpy(copy_str, str);
	printf("%s \n", copy_str);

	//문자열 덧붙이기 strcat(덧붙일 공간, 덧붙일 문자)
	strcat(copy_str, "BLY");
	printf("%s \n", copy_str);
}