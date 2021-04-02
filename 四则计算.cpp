#include <stdio.h>
int main()
{
	float a, b;//输入计算的数
	char c;//输入加减乘除
	printf("please enter a,b op:");
	scanf("%f%c%f", &a, &c, &b);
	switch (c)
	{
	case'+':
		printf("%f+%f=%f", a, b, a + b);
		break;
	case'-':
		printf("%f-%f=%f", a, b, a - b);
		break;
	case'*':
		printf("%f*%f=%f", a, b, a*b);
		break;
	case'/':
		if (b != 0.0)  //分母不能为0
			printf("%f/%f=%f", a, b, a / b);
		else
			printf("The denominator cannot be 0");
		break;
	default:
		printf("error\n");
		break;
	}
	return 0;
}