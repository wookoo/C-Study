#include<stdio.h>

int main(void)
{

	int input1, input2; //사용자에게 입력받을 변수 2개 선언
	int  Quotient, Remainder; // 출력값으로 저장할 값 2개 선언
	printf("첫 번째 정수를 입력하세요 : ");
	scanf("%d", &input1); //입력받은 값을 int 로 저장
	printf("\n두 번째 정수를 입력하세요 : ");
	scanf("%d", &input2); //입력받은 값을 int 로 저장
	Quotient = input1 / input2; // / 연산자를 사용하여 몫만 저장
	Remainder = input1%input2; // % 연산자를 사용하여 나머지만 저장
	printf("몫은 %d 이고 나머지는 %d 입니다.", Quotient, Remainder); //몫, 나머지 출력
	return 0;
}
