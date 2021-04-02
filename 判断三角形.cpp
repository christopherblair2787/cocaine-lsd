#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c;
	float s, area;
	printf("请输入三角形的三条边:\n");
	scanf("%f,%f,%f", &a, &b, &c);
	if (a + b > c&&b + c > a&&a + c > b)
	{
		s = (a + b + c) / 2;
		area = (float)sqrt(s*(s - a)*(s - b)*(s - c));//求面积
		printf("三角形的面积是：%f\n", area);
		if (a == b && a == c)//三边相等
			printf("三角形是等边三角形\n");
		else if (a == b || a == c || b == c)//两边相等
			printf("三角形是等腰三角形\n");
		else if ((a*a + b * b == c * c) || (a*a + c * c == b * b) || (b*b + c * c == a * a))//勾股定理判断直角三角形
			printf("三角形是直角三角形\n");
		else
			printf("三角形是普通三角形\n");
	}
	else
		printf("不能构成三角形\n");
	return 0;
}