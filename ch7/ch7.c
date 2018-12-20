
#include <stdio.h>

int q7_1_1(void)
{
	int num1;
	int i = 0;

	printf("양의 정수 하나 입력: ");
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
	
	printf("양의 정수 하나 입력: ");
	scanf_s("%d", &num1);
	printf("몇 배수: ");
	scanf_s("%d", &cnt);

	multy = num1 * 3;
	
	while (i <= num1)
	{
		printf("%d의 %d배수: %d \n", num1, i, multy);
		i++;
	}   		
	return 0;
}


int q7_1_3(void)
{
	int num1=0;
	int total=0;

	printf("정수 입력(0입력 시 종료): ");
	scanf_s("%d", &num1);

	total += num1;

	while (num1!=0)
	{
		printf("정수 입력(0입력 시 종료): ");
		scanf_s("%d", &num1);

		total += num1;
	}
	printf("합계: %d \n", total);
	return 0;
}

//{작업 중}

//p.156 구구단 전체 출력
int ggudan(void)
{
	int num1=2, num2;

	while (num1 < 10)
	{
		printf("%d 단 \n", num1);
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
