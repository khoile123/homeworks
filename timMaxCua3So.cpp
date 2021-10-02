#include<stdio.h>	

int main()
{
	printf("chuong trinh tim max cua 3 so");
	int a, b, c;
	printf("\r\nnhap a: ");
	scanf("%d", &a);
	printf("\r\nnhap b: ");
	scanf("%d", &b);
	printf("\r\nnhap c: ");
	scanf("%d", &c);
	printf("\r\nket qua cua ban la: ");
	if (a > b) 
	{
		if (a > c) 
		{
			printf("a = %d", a);
		}
		else printf("c = %d", c);

	}
	else if (b > c) 
	{
		printf("b = %d", b);
	}
		else printf("c = %d", c);
	return 0;
}
