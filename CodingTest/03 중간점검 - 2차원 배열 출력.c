#include <stdio.h>



int main(void)
{
	//�������迭 �ƹ��ų� ����� ������ ���Ҹ� ���

	int arr[4][2] = { {1,2}, {3,4}, {5,6},{7,8} };

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		for (int j = 0; j < sizeof(arr[i])/sizeof(arr[0][0]); j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	//���ڿ��� ����(5�� ��������)�� ���Ͻÿ�
	int count = 0;
	char str[30] = "Hello";
	for (int i = 0; i < str[i] != '\0'; i++) {
		count++;
	}
	printf("%d", count);

	return 0;
}