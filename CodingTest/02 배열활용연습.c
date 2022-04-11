#include <stdio.h>

int main(void)
{
	//최대값은 14(arr[9])
	int arr[10] = { 8, 5, 1, 6, 4, 9, 10, 14, 7, 11};
	int max = 0;
	int idxMax = 0;
	
	//배열 요소중 최대값과 그에 해당하는 idx값을 구하시오
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		if (max < arr[i]) {
			max = arr[i];
			idxMax = i;
		}
	}
	printf("최댓값 : %d, 위치 : %d", max, idxMax);

	return 0;
}