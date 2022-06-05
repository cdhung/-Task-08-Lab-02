#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Tinh dien tich hinh thang S = (a + b)*h/2
int main() {
	int a, b , h;
	
	printf("Nhap day nho a = ");
	scanf("%d",&a);
	printf("Nhap day lon b = ");
	scanf("%d",&b);
	printf("Nhap chieu cao h = ");
	scanf("%d",&h);
	
	float S = (float)(a+b)*h/2;
	printf("Dien tich hinh thang S = (a + b)*h/2 = %.2f", S);
	return 0;
}
