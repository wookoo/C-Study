#include <stdio.h>
int main() {
	float x; //사용자에게 입력받을 값을 선언해줍니다
	printf("x의 값을 입력하세요. : ");
	//%f 형식 지정자를 사용하여 사용자에게 입력 받은 값을 실수로 x 주소에 넣습니다
	scanf("%f", &x);
	//결과 값은 실수이므로 %f 를 사용하여 출력하게 합니다.
//제곱은 변수를 n 번 곱해주는것이기 때문에 x 를 3번 2번 곱해줍니다.

	printf("다항식의 값은 %f 입니다.", ((3 * x* x *x) - (7 * x* x) + 9));
	return 0;
}
