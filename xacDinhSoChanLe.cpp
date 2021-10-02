#include<stdio.h>

int main()
{
	printf("chuong trinh xac dinh so chan hay le");
	printf("\r\nNhap so: ");
	int a;
	scanf("%d", &a);
	if (a % 2 == 0) {
		printf("so ban chon la so chan");
	}
	else printf("so ban chon la so le");
	return 0;
}
