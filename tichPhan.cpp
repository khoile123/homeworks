#include <stdio.h>
#include <stdint.h>

int main() {
	printf("Chuong trinh tinh tich phan ham f(x)=x^2 trong khoang [a;b]\r\n");
 	float a, b, h;
	float s = 0;
	float dientich = 0;
	
	printf("Nhap a: ");
		scanf("%f", &a); 	
	printf("\r\nNhap b: ");
		scanf("%f", &b);
	
	h = (b-a) / 1000; 
	
	for (float i = a; i < b; i +=h) 
		{
			float j = i + h;
			s = ((i*i + j*j) / 2) * h;
			dientich  += s;
		}
	printf("Ket qua la: %0.2f\r\n", dientich);
	return 0;
}
