#include <stdio.h>



int main(void)
{
	//src에 있는 문자열의 내용을 dest에 복사하세요
	char dest[20]; //복사공간
	char src[] = "Hello"; //복사할 문자열

	for (int i = 0; i < strlen(dest); i++) {
		dest[i] = src[i];
		printf("%c", dest[i]);
	}

	return 0;
}