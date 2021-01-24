#include<stdio.h>
int main(void)
{
	int a, b, max;
	scanf_s("%d %d", &a, &b);
	if (a > b)
		max = a;
	else
		max = b;
	printf("max=%d\n", max);
	return 0;
}