#include <stdio.h>

int main(void)
{
	int arr[3][4] = {
		{1, 2, 3, 4},         //[0][0] : 1, [0][1] : 2, [0][2] : 3, [0][3] : 4
		{5, 6, 7, 8},         //[1][0] : 5, [1][1] : 6, [1][2] : 7, [1][3] : 8
		{9, 10, 11, 12} };    //[2][0] : 9, [2][1] :10, [2][2] : 11, [2][3] : 12
	//sizeof(arr[0])  arr[0] 공간 하나의 크기 타입이 바뀌어도 O
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		for (int j = 0; j < sizeof(arr[i])/sizeof(arr[0][0]); j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
}