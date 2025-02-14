#include<stdio.h>

int main(void)
{
	int age;
	double height;

	printf("나이와 키를 입력하세요 : ");
	scanf("%d%lf", &age, &height);
	printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height);

	/*
	* 나이와 키를 입력하세요 : 27 177.7
	* 나이는 27살, 키는 177.7cm입니다.
	*/

	return 0;
}
