#include<stdio.h>


int main(void)
{
	int input1; //입력 받을 변수 선언
	int result; //출력값으로 할 변수 선언
	printf("첫 번째 정수를 입력하세요 : ");
	scanf("%d", &input1); //입력 받은 값을 int 형으로 저장
	result = input1*input1*input1 ; //세제곱은 변수를 3번 곱하는것과 같음
	printf("세제곱 값은 %d*%d*%d=%d 입니다.", input1, input1, input1,result ); //결과 출력
	return 0;
}
