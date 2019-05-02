#include<stdio.h>
int main(void)
{
	float x1, x2; //입력 받을 값 선언
	printf("두개의 실수를 입력하세요 : ");
	scanf("%f %f", &x1, &x2); //float 형식으로 입력 받을값 선언
	int result; //int 형으로 결과값 선언
	result = x1 + x2; //float 형으로 더했을시, int 형으로 만들면, 소수점은 사라진다.
	printf("합의 정수부 =  %d", result); //정수부만 출력한다.
	return 0;
} 
