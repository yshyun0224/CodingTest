#include <stdio.h>

int main(void)
{
	//�ִ밪�� 14(arr[9])
	int arr[10] = { 8, 5, 1, 6, 4, 9, 10, 14, 7, 11};
	int max = 0;
	int idxMax = 0;
	
	//�迭 ����� �ִ밪�� �׿� �ش��ϴ� idx���� ���Ͻÿ�
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		if (max < arr[i]) {
			max = arr[i];
			idxMax = i;
		}
	}
	printf("�ִ� : %d, ��ġ : %d", max, idxMax);

	return 0;
}