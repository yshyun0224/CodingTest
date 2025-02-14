#include <stdio.h>


//배열 요소중 최대값과 그에 해당하는 idx값을 구하시오
void getMax(int* arr, int length) {
	int max = 0;
	int idxMax = 0;

	
	for (int i = 0; i < length; i++) {
		if (max < arr[i]) {
			max = arr[i];
			idxMax = i;
		}
	}
	printf("최댓값 : %d, 위치 : %d", max, idxMax);
}

void getMin(int* arr, int length) {
	int min = 101;
	int idxMin = 0;

	for (int i = 0; i < length; i++) {
		if (min > arr[i]) {
			min = arr[i];
			idxMin = i;
		}
	}
	printf("\n최솟값 : %d, 위치 : %d", min, idxMin);
}

int main(void)
{
	//최대값은 14(arr[9])
	//최솟값은 1(arr[2])
	int arr1[10] = { 8, 5, 1, 6, 4, 9, 10, 14, 7, 11};

	getMax(arr1, sizeof(arr1) / sizeof(arr1[0]));
	//sizeof(arr1)/sizeof(arr1[0])
	getMin(arr1, sizeof(arr1) / sizeof(arr1[0]));
	
	return 0;
}