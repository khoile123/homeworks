#include <stdio.h>
#include <stdint.h>

float main() {
	printf("Chuong trinh tinh tich phan ham f(x)=x^2\r\n");

	float a, b, h, x = 0, y = 0;
	
	printf("Nhap a: ");
	scanf("%f", &a); 
	
	printf("\r\nNhap b: ");
	scanf("%f", &b);
	h = (b-a) / 1000; 
	float s = 0;
	float dientich = 0;
	for (float i = a; i < b; i +=h) {
		float j = i + h;
			x = i * i;
			y = j * j;
			s = ((x + y) / 2) * h;
			dientich  += s;
	}
	printf("Ket qua la: %f\r\n", dientich);
	return 0;
}
