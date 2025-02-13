#include<stdio.h>

int main(void)
{
	10 + 20;

	printf("Be Happy!\n");
	printf("1234567890\n1234567890\n");
	printf("My\tFriend\n");
	// "My"를 출력학 탭 위치로 이동(\t) 후에 "friend"를 출력하고 줄 바꿈(\n)
	printf("Goot\bd\tchance\n");
	// "goot"를 출력하고 한 칸 왼쪽으로 이동(\b)해 t를 d로 바꾸고 탭 위치로 이동(\t) 후에 "chance"를 출력하고 줄 바꿈(\n)
	printf("Cow\rW\a\n");
	// 맨 앞으로 이동(\r)해 C를 W로 바꾸고 벨소리(\a)를 내고 줄 바꿈(\n)

	return 0;
}
