#include <stdio.h>


//�迭 ����� �ִ밪�� �׿� �ش��ϴ� idx���� ���Ͻÿ�
void getMax(int* arr, int length) {
	int max = 0;
	int idxMax = 0;

	
	for (int i = 0; i < length; i++) {
		if (max < arr[i]) {
			max = arr[i];
			idxMax = i;
		}
	}
	printf("�ִ� : %d, ��ġ : %d", max, idxMax);
}

int main(void)
{
	//�ִ밪�� 14(arr[9])
	int arr1[10] = { 8, 5, 1, 6, 4, 9, 10, 14, 7, 11};

	getMax(arr1, 10);
	//sizeof(arr1)/sizeof(arr1[0])
	
	//�Լ� ���� �ʰ� �ּҰ��� idx ���ϱ�
	int min = 101;
	int idxMin = 0;

	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
		if (min > arr1[i]) {
			min = arr1[i];
			idxMin = i;
		}
	}
	printf("\n�ּڰ� : %d, ��ġ : %d", min, idxMin);

	return 0;
}