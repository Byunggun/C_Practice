
#include <stdio.h>

int q7_1_1(void)
{
	int num1;
	int i = 0;

	printf("���� ���� �ϳ� �Է�: ");
	scanf_s("%d", &num1);

	while (i<num1)
	{
		printf("Hello world! \n");
		i++;
	}
	return 0;
}


int q7_1_2(void)
{
	int num1;
	int cnt;
	int i=1;
	int multy;
	
	printf("���� ���� �ϳ� �Է�: ");
	scanf_s("%d", &num1);
	printf("�� ���: ");
	scanf_s("%d", &cnt);

	multy = num1 * 3;
	
	while (i <= num1)
	{
		printf("%d�� %d���: %d \n", num1, i, multy);
		i++;
	}   		
	return 0;
}


int q7_1_3(void)
{
	int num1=0;
	int total=0;

	printf("���� �Է�(0�Է� �� ����): ");
	scanf_s("%d", &num1);

	total += num1;

	while (num1!=0)
	{
		printf("���� �Է�(0�Է� �� ����): ");
		scanf_s("%d", &num1);

		total += num1;
	}
	printf("�հ�: %d \n", total);
	return 0;
}

//{�۾� ��}

//p.156 ������ ��ü ���
int ggudan(void)
{
	int num1=2, num2;

	while (num1 < 10)
	{
		printf("%d �� \n", num1);
		num2 = 1;
		while (num2 < 10)
		{
			printf("%d x %d = %d \n", num1, num2, num1*num2);
			num2++;
		}
		num1++;
	}
	return 0;
}

int main(void)
{
	//q7_1_1();
	//q7_1_2();
	q7_1_3();
	//ggudan();
	return 0;
}
