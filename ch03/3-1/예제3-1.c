#include<stdio.h>

int main(void)
{
	short sh = 32767;					// short 형의 최댓값 초기화
	int in = 2147483648;				// int 형의 최댓값 초기화
	long ln = 2147483648;				// long 형의 최댓값 초기화
	long long lln = 123451234512345;	// 아주 큰 값 초기화

	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %ld\n", ln);
	printf("long long형 변수 출력 : %lld\n", lln);

	return 0;
}
