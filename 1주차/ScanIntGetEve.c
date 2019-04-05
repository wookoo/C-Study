#include <stdio.h> //stdio.h 헤더 파일을 포함한다.
//main 함수를 정의하는 부분
int main() {
	int x; //입력받을 숫자인 int x 를 받는다.
	int sum; //더하기의 총값인 sum 을 선언해준다.
	sum = 0; //sum 값을 초기화해준다.
	for (int i = 1; i < 4; i++) {
		//for 문 에서 사용할 지역변수인 i를 초기화, for 문의 조건식 설정, i 를 1씩 더한다.
		printf("정수를 입력하세요 : ");
		scanf("%d", &x); //메모리에 직접적으로 접근해야 변수의 값을 바꿀수 있다.
		//for 문이 돌때마다 x 값이 바뀌므로 총 더한값인 sum 에다가 x 를 추가해준다.
		sum += x;
	}
	//3번 더했으므로 3으로 나눈다.
	sum = sum / 3;
	//문자열 포메팅을 사용하여 출력한다.
	printf("평균은 다음과 같습니다. : %d", sum);
	return 0;
}
