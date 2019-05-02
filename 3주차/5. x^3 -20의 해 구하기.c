#include<stdio.h>

int main(void)
{
	double x1; // 입력받을 값 선언
	double result; //출력할 결과 변수 선언
	printf("정수를 입력하세요. : ");
	scanf("%lf", &x1); //실수로 입력 받아야 나눴을때 실수가 나온다.
	result = (x1*x1*x1 - 20) / (x1 - 7); //주어진 문제에 대한 수식의 값을 저장한다.
	printf("\n수식의 값은 %lf 입니다.", result); //수식에 대한 결과값을 출력한다. 
	return 0;
	
} 
