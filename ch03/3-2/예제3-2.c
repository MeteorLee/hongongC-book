#include<stdio.h>

int main(void)
{
	unsigned int a;

	a = 4294967295;		// 큰 양수로 지정
	printf("%d\n", a);	// %d로 출력			-1 출력
	a = -1;				// 음수 저장
	printf("%u\n", a);	// %u로 출력			4294967295 출력

	return 0;
}
