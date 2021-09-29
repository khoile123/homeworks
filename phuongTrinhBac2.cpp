#include<stdio.h>
#include<math.h>

int main() {
	printf("chuong trinh tinh phuong trinh bac 2\r\n");
	float a, b, c, delta, d;
	printf("Nhap a: ");
	scanf("%f", &a);
	printf("Nhap b: ");
	scanf("%f", &b);
	printf("Nhap c: ");
	scanf("%f", &c);
	if (a == 0) 
		{
			if(b==0 && c!=0)        //phuong trinh bac 1
			{
				printf("Phuong trinh vo nghiem!");
			}
				else if(b==0&&c==0)
				{
					printf("Phuong trinh co vo so nghiem!");
				}
					else
					{
						printf("Phuong trinh co 1 nghiem duy nhat = %0.2f", (-c)/d);
					}
		}
	else 
	{
		delta = (b * b) - (4 * a * c);
		d = sqrt(delta);
		float x1, x2;
	
		if (delta < 0) 
			{
				printf("\r\nphuong trinh vo nghiem");
			}
			else if (delta == 0) 		
				{
					x1 = (-b) / 2*a;
					printf("\r\nPhuong trinh co 1 nghiem kep = %0.2f", x1);
				}
				else 
				{
					x1 = (-b + d) / (2 * a);
					x2 = (-b - d) / (2 * a);
					printf("\r\nphuong trinh co hai nghiem phan biet: ");
					printf("\r\nx1 = %0.2f", x1);
					printf("\r\nx2 = %0.2f", x2);
				}
	}
	return 0;
}
