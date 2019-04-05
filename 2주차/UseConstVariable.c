#include <stdio.h>
int main() {
	int input; //사용자에게 입력 받을 값을 선언해준다.
	double results; //결과값을 저장할 변수를 선언해준다.
	const double SQMETER_PER_PYEONG = 3.3058; //더블 형식의 기호상수를 선언한다.

	printf("평을 입력하세요 : ");
	scanf("%d", &input);//사용자에게 입력 받은 값을 정수형으로 input 주소에 넣는다.
	//결과는 3.3058인 기호상수와 input 을 곱해야 한다.
	results = SQMETER_PER_PYEONG * input;
	printf("%f 평방미터 입니다.", results);
	return 0;
}
