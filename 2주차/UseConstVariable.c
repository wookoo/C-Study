#include <stdio.h>
int main() {
	int input; //����ڿ��� �Է� ���� ���� �������ش�.
	double results; //������� ������ ������ �������ش�.
	const double SQMETER_PER_PYEONG = 3.3058; //���� ������ ��ȣ����� �����Ѵ�.

	printf("���� �Է��ϼ��� : ");
	scanf("%d", &input);//����ڿ��� �Է� ���� ���� ���������� input �ּҿ� �ִ´�.
	//����� 3.3058�� ��ȣ����� input �� ���ؾ� �Ѵ�.
	results = SQMETER_PER_PYEONG * input;
	printf("%f ������ �Դϴ�.", results);
	return 0;
}
