#include <stdio.h>
int main() {
	float input; //float 형식의 변수를 선언한다
	printf("실수를 입력하세요 : ");
	// 사용자에게 받은 값을 부동소수점으로 저장하고 input 주소에 저장한다
	scanf("%f", &input);
	//%f 를 사용하여 실수형 그대로 출력한다
	printf("실수 형식으로는 %f 이고\n", input);
	//%e 를 사용하여 지수형으로 바꾼후 출력한다.
	printf("지수 형식으로는 %e 입니다.", input);
	return 0;
}
