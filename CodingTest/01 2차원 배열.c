#include <stdio.h>

int main(void)
{
	int arr[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	//sizeof(arr[0])  arr[0] 공간 하나의 크기 타입이 바뀌어도 O
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
		printf("%d\n",arr[i]);
	}
}