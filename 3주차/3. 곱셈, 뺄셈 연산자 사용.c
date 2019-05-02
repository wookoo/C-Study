#include<stdio.h>
int main(void)
{
	
	int x1, x2, x3; //입력받을 변수 선언
	int result; //출력값으로 할 변수 선언
	printf("정수 3개를 입력하세요. : ");
	scanf("%d %d %d", &x1, &x2, &x3); //입력 받은 값을 int 형으로 저장
	result = x1*x2 - x3; //문제에서 제시한 결과값, - * 연산자를 사용한다.
	printf("%d*%d-%d = %d", x1,x2,x3,result); //결과값및 수식 출력
	return 0;
} 
