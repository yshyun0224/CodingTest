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
	//src�� �ִ� ���ڿ��� ������ dest�� �����ϼ���
	char dest[20]; //�������
	char src[] = "Hello"; //������ ���ڿ�

	//dest�� src�� �ִ� "Hello"�� ����
	my_strcpy(dest, src);

	for (int i = 0; i < strlen(dest); i++) {
		//dest[i] = src[i];
		printf("%c", dest[i]);
	}

	return 0;
}