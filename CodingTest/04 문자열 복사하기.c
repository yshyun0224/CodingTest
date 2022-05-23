#include <stdio.h>
#include <string.h>

void my_strcpy(char* d, char* s) {
	int length = strlen(d);
	for (int i = 0; i < length; i++) {
		d[i] = s[i];
	}
}

int main(void)
{
	//src에 있는 문자열의 내용을 dest에 복사하세요
	char dest[20]; //복사공간
	char src[] = "Hello"; //복사할 문자열

	//dest에 src에 있는 "Hello"를 복사
	my_strcpy(dest, src);

	for (int i = 0; i < strlen(dest); i++) {
		//dest[i] = src[i];
		printf("%c", dest[i]);
	}

	return 0;
}