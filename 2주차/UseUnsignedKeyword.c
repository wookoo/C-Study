#include <stdio.h>
int main() {
	// 실습 1 - 3
	unsigned short i; //정수를 담는 변수인 short 타입의 변수를 선언한다.
	//short 형에 unsigned 를 붙여서 음수를 담는 메모리를 양수로 끌어온다.
	i = 32768; //i 에다 32768 을 담는다
	printf("20184071 김도현\n");
	printf("i=%d\n", i); // 정수형의 형식 지정자를 사용하여 i 를 출력한다.
	return 0; //main 함수가 잘 작동되었기에 0을 리턴한다.
}
