//p.85
#include <stdio.h>

int Notation(void)
{
	int num1 = 0xA7, num2 = 0x43;
	int num3 = 032, num4 = 024;

	printf("0xA7�� 10���� ���� ��: %d \n", num1);
	printf("0x43�� 10���� ���� ��: %d \n", num2);
	printf(" 032�� 10���� ���� ��: %d \n", num3);
	printf(" 024�� 10���� ���� ��: %d \n", num4);

	printf("%d-%d=%d \n", num1, num2, num1 - num2);
	printf("%d+%d=%d \n", num3, num4, num3 + num4);
	return 0;
}

//p.100 ��Ʈ �̵� ������
int BitRightShift(void)
{
	int num = -16; //11111111 11111111 11111111 1110000
	printf("2ĭ ������ �̵��� ���: %d \n", num >> 2);
	printf("3ĭ ������ �̵��� ���: %d \n", num >> 3);
	return 0;
}


// p.100 
// q4_4_1: �Է� ���� ���� ���� ��ȣ�� �ٲ㼭 ���. Ex) 3 �Է� �� -> -3 ���. ��Ʈ ������ �̿��ϱ�.

int q4_4_1(void)
{	
	/*������ ���
	int num;
	printf("���� �Է�: ");
	scanf_s("%d", &num, sizeof(num));
	num = ~num;
	num = num + 1;
	printf("��ȣ�� �ٲ� ���: %d \n", num);
	*/

	/*�� ���) ��Ʈ ������ �̿�
	int num1;
	int num2;
	int num1to2;

	printf("��ȣ ���� �� ���� : ");
	scanf_s("%d", &num1, sizeof(num1));

	num1to2 = ~num1;
	num2 = num1to2 + 1;
	printf("��ȣ ���� �� ���� : %d", num2);
	*/


	/*�� ���) ��Ʈ ������ �̿�x
	int num1;
	int num2;

	printf("��ȣ ���� �� ���� : ");
	scanf_s("%d", &num1, sizeof(num1));

	num2 = -num1;
	printf("��ȣ ���� �� ���� : %d", num2);
	*/       
	return 0;
}

//q4_4_2:

int q4_4_2(void)
{
	/*������ ��� 
	int num = 3;
	num = num << 3;
	num = num >> 2;
	printf("%d \n", num);
	*/

	/*�� ���{����}
	int num, multiply, divide;
	//int result;

	printf("num : ");
	scanf_s("%d", &num, sizeof(num));

	multiply = num << 3; //2�� 3��, 8
	divide = num >> 2; //2�� 2��, 4
	//result = multiply / divide;

	printf("multiply ���: %d \n", multiply);
	printf("divide ���: %d \n", divide);
	//printf("���� ���: %d \n", result);
	*/
	return 0;	 	
}
	
int main(void)
{
	//Notation();
	//BitRightShift();
	//q4_4_1();
	//q4_4_2();
	return 0;
}
