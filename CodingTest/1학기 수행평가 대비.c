#include <string.h>
#include <stdio.h>

int main(void) {
	//�迭�� 20��, ���ڱ��̴� 3
	char str[20] = "YSY";
	
	//������ ���̸� ���ϴ� �Լ�
	int length = strlen(str);
	printf("%d \n", length);

	//���ڿ� ���� strcpy(�������, ������)
	char copy_str[15];
	strcpy(copy_str, str);
	printf("%s \n", copy_str);

	//���ڿ� �����̱� strcat(������ ����, ������ ����)
	strcat(copy_str, "BLY");
	printf("%s \n", copy_str);
}