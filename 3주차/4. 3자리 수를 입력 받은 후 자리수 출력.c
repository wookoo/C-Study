#include<stdio.h>

int main(void)
{
	int x1; //입력받을 변수 선언
	int quotient, Remainder; //몫과 나머지 변수 선언
	printf("정수를 입력하세요. : ");
	scanf("%d", &x1); //입력받은 값을 int  로 저장
	quotient = x1 / 100; //100의 자리는 입력받은 값 에서 100을 나눈값과 같다.
	Remainder = x1 % 100; //10의 자리와 1의 자리는 100을 나눈 나머지와 같다.
	printf("백의 자리 수 : %d\n", quotient); //100을 나눈값 출력
	quotient = Remainder / 10; //10의 자리의 몫은 100을 나눈 나머지에서 10을 나눈것과 같다.
	Remainder %= 10; //일의 자리는 남은 나머지에서 10을 나눈 값의 나머지와 같다.

	printf("십의 자리 수 : %d\n", quotient); //십의 자리수 몫 출력
	printf("일의 자리 수 : %d\n", Remainder); //남은 나머지 출력
	return 0;
} 
