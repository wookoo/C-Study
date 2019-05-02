#include<stdio.h>
#include<math.h> //sqrt 함수를 사용하기 위해 추가한다.

int main(void)
{
	int x1, x2, y1, y2; //입력받을 값 선언
	double distance; //출력할 결과값 선언
	printf("첫번째 점 (x1,y1) : ");
	scanf("%d  %d", &x1, &y1); //사용자로부터  x1 y1 을 입력받는다
	printf("두번째 점 (x2,y2) : ");
	scanf("%d %d", &x2, &y2); //사용자로부터  x2 y2 을 입력받는다
	distance = sqrt(((x1 - x2)*(x1 - x2)) + ((y1 - y2)*(y1 - y2))); //출력의 결과는math 의 sqrt 함수를 사용하여 조건식을 넣은후  출력한다.
	//sqrt 는 제곱근을 씌우는 명령어다.
	printf("두점사이 거리는  = %lf 입니다.", distance); //결과값인 두점사이 거리를 출력한다.
	return 0;
} 
