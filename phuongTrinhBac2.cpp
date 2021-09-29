#include<stdio.h>
#include<math.h>

float main() {
	printf("chuong trinh tinh phuong trinh bac 2\r\n");
	float a, b, c, delta, d;
	printf("Nhap a: ");
	scanf_s("%f", &a);
	if (a == 0) {
		printf("a khong phu hop (a != 0)");
	}
	else {
		printf("nhap b: ");
		scanf_s("%f", &b);
		printf("nhap c: ");
		scanf_s("%f", &c);
	}
	delta = (b * b) - (4 * a * c);
	d = sqrt(delta);
	float x1, x2;

	if (delta < 0) {
		printf("\r\nphuong trinh vo nghiem");
	}
	else if (delta == 0) {
		x1 = (-b) / 2*a;
		printf("\r\nPhuong trinh co 1 nghiem kep = %f", x1);
	}
	else {
		x1 = (-b + d) / (2 * a);
		x2 = (-b - d) / (2 * a);
		printf("\r\nphuong trinh co hai nghiem phan biet: ");
		printf("\r\nx1 = %f", x1);
		printf("\r\nx2 = %f", x2);
	}
	return 0;
}