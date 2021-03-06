#include <stdio.h> //stdio.h 헤더 파일을 포함한다.
//main 함수를 정의하는 부분
int main() {
	int price = 25000;//price 변수를 선언해준다.
	//파이썬과는 다르게 C언어 는 사용자가 직접 변수의 타입을 선언해 줘야한다.
	//그렇기 때문에 price 변수는 int 즉 정수로 저장을 하겠다고 선언을 하고, price 변수에 22000을 넣는다.
	//파이썬과 다르게 printf 사용할때 직접 출력을 못하기 떄문에
	// 문자열 포매팅을 사용한다. %d 를 사용하여 정수를 문자로 출력한다고 선언한다
	printf("20184071 김도현\n");
	printf("제품의 가격은 %d원 입니다.\n", price); //%d 는 정수
	return 0;
}
