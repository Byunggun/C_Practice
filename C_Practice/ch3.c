// Ch. 3

// p.55 ���� ���α׷�

#include <stdio.h>

int SimpleAddTwo(void)
{
	int num1=3;
	int num2=4;
	int res=num1+num2;

	printf("%d \n", res);
	return 0;
}


// p.61 ���� ���� ������
int OperatorFour(void)
{
	int num1 = 12;
	int num2 = 12;

	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++); //���� ����
	printf("num1: %d \n", num1);

	printf("num2: %d \n", num2);
	printf("++num2: %d \n", ++num2); // ���� ����
	printf("num2: %d \n", num2);

	return 0;
}


// p.62 
int OperatorFive(void)
{
	int num1 = 10;
	int num2 = (num1--) + 2; //���� ����

	printf("num1: %d \n", num1);
	printf("num2: %d \n", num2);

	return 0;
}


// p.70 scanf_s("�Է� ���� ����",&�����̸�, sizeof(�Է� ���� ũ��))
int SimpleAddThree(void)
{
	int result;
	int num1, num2;

	printf("���� one: ");
	scanf_s("%d", &num1, sizeof(num1)); //ù ��° ���� �Է�
	printf("���� two: ");
	scanf_s("%d", &num2, sizeof(num2)); // �� ��° ���� �Է�

	result = num1 + num2;
	printf("%d+%d=%d \n", num1, num2, result);
	return 0;
}


// p.74 ����
// 2���� ���� �Է�, �� ���� ����, ���� ��� ����ϴ� ���α׷� �ۼ�
int q3_1_1(void)
{
	int result1, result2;
	int num1;
	int num2;


	printf("num1: ");
	scanf_s("%d", &num1, sizeof(num1));
	printf("num2: ");
	scanf_s("%d", &num2, sizeof(num2));

	result1 = num1 + num2;
	result2 = num1 * num2;
	printf("%d \n",result1);
	printf("%d",result2);
	return 0;
}

// 3���� ���� �Է�, num1 * num2 + num3 ����
int q3_1_2(void)
{
	int num1, num2, num3;
	int result;

	printf("num1: ");
	scanf_s("%d", &num1, sizeof(num1));
	printf("num2: ");
	scanf_s("%d", &num2, sizeof(num2));
	printf("num3: ");
	scanf_s("%d", &num3, sizeof(num3));

	result = num1 * num2 + num3;
	printf("%d", result);
	return 0;
}

// 1���� ���� �Է�, ������ ���
int q3_1_3(void)
{
	int num, result;

	printf("num: ");
	scanf_s("%d", &num, sizeof(num));

	result = num * num;
	printf("%d", result);
	return 0;


	/* �Ʒ� �ٽ� �ϱ�
	double i, j, result;

	printf("����(i)�Է�: ");
	scanf_s("%d", &i, sizeof(i));
	printf("�� ��(j)�Է�: ");
	scanf_s("%d", &j, sizeof(j));

	result = pow(i, j);
	printf("%d", result);
	return 0;
	*/
}

//�Է� ���� �� ������ �������� ���� ��, ������ ����ϱ�. ex)7,2 �Է�->�� 3, ������1 ���.
int q3_1_4(void)
{
	int num1, num2, result1, result2;

	printf("num1: ");
	scanf_s("%d", &num1, sizeof(num1));
	printf("num2: ");
	scanf_s("%d", &num2, sizeof(num2));

	result1 = num1 / num2; //�� ��ȯ
	result2 = num1 % num2; //������ ��ȯ 
	printf("%d \n", result1);
	printf("%d", result2);
	return 0;
}

int q3_1_5(void)
{
	int num1, num2, num3, result;

	printf("num1: ");
	scanf_s("%d", &num1, sizeof(num1));
	printf("num2: ");
	scanf_s("%d", &num2, sizeof(num2));
	printf("num3: ");
	scanf_s("%d", &num3, sizeof(num3));

	result = (num1 - num2)*(num2 + num3)*(num3 % num1);
	printf("%d", result);
	return 0;	
}


int main(void)
{
	// SimpleAddTwo();
	// OperatorFour();
	// OperatorFive();
	// SimpleAddThree();
	// q3_1_1();
	// q3_1_2();
	// q3_1_3();
	// q3_1_4();
	// q3_1_5();
	return 0;
}
