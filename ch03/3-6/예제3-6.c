#include<stdio.h>

int main(void)
{
	char grade;
	char name[20];

	printf("학점 입력 : ");
	scanf("%c", &grade);
	printf("이름 입력 : ");
	scanf("%s", name);
	printf("%s의 학점은 %c입니다.\n", name, grade);

	/*
	* 학점 입력 : A
	* 이름 입력 : 홍길동
	* 홍길동의 학점은 A입니다.
	*/

	return 0;	
}
