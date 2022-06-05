#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a;
	float b;
	double c;
	char d;
	
	printf("Nhap 1 so kieu int = ");
	scanf("%d",&a);
	printf("Nhap 1 so kieu float = ");
	scanf("%f",&b);
	printf("Nhap 1 so kieu double = ");
	scanf("%lf",&c);
	printf("Nhap 1 ky tu kieu char = ");
	fflush(stdin);
	scanf("%c",&d);
	
	printf("/*======= Kich thuoc cua cac kieu du lieu ========*/\n\n");
	printf("Kieu int: %d Byte\n", sizeof (int));
	printf("So nguyen: %d\n\n", a);
	
	printf("Kieu float: %d Byte\n", sizeof (float));
	printf("So thuc kieu float: %f\n\n", b);
	
	printf("Kieu double: %d Byte\n", sizeof (double));
	printf("So thuc kieu double: %lf\n\n", c);
	
	printf("Kieu char: %d Byte\n", sizeof (float));
	printf("Ky tu: %c\n\n", d);
	
	printf("Kieu long int: %d Byte\n\n", sizeof (long int));
	
	printf("Kieu long double: %d Byte\n", sizeof (long double));
	return 0;
}
