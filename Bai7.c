#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Tinh chu vi, dien tich hinh tron, vuong, chu nhat
int main() {
	float R, a, b, c;
	
	//hinh tron
	printf("Nhap ban kinh R = ");
	scanf("%f",&R);
	printf("Chu vi hinh tron = %.2f\n",R*R*3.14);
	printf("Dien tich hinh tron = %.2f\n",2*R*3.14);
	
	//hinh vuong
	printf("Nhap canh hinh vuong a = ");
	scanf("%f",&a);
	printf("Dien tich hinh vuong = %.2f\n", a*a);
	printf("Chu vi hinh vuong = %.2f\n", 4*a);
	
	//hinh chu nhat
	printf("Nhap 2 canh hinh chu nhat = ");
	scanf("%f%f", &b,&c);
	printf("Dien tich hinh chu nhat = %.2f\n", b*c);
	printf("Chu vi hinh chu nhat = %.2f\n", 2*(b+c));
	
	return 0;
}
