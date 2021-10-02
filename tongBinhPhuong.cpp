#include<stdio.h>	

int main()
{
	printf("chuong trinh tinh tong binh phuong cac so le\r\n");
	printf("nhap so: \r\n");
	int n;
	scanf("%d", &n);
	int a = 0, sum=0;
	for (int i = 0; i < n; i++) {
		if (i % 2 != 0) {
			a = i * i;
			sum += a;
		}
	}
	printf("ket qua cua ban la: %d", sum);
	return 0;
}
