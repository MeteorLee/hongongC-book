#include<stdio.h>

int main(void)
{
	float ft = 1.234567890123456789;
	double db = 1.234567890123456789;

	printf("float형 변수의 값 : %.20f\n", ft);		// 20자리까지 출력
	printf("double형 변수의 값 : %.20lf\n", db);

	/* 출력
	* float형 변수의 값 : 1.23456788063049316406 - 9번째부터 다름(7자리까지 보장)
	* double형 변수의 값 : 1.23456789012345669043 - 17번째부터 다름(15자리까지 보장)
	*/

	return 0;
}
