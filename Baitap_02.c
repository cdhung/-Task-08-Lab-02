#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int num = 10;
	char ch = 'A';
	float f = 25.3;
	double d = 25.3;
	printf("num = %d\n", num); //num = 10 in ra so nguyen
	printf("ch = %c\n", ch); //ch = A in ra ky tu
	printf("f = %.2f\n", f); // f = 25.30 %.2f in ra 2 so dang sau dau phay
	printf("d = %f\n", d); // d = 25.300000 %f in ra tat ca cac so dang sau dau phay (6 chu so)
	getch();
	
	return 0;
}

/* Ket qua:
num = 10
ch = A
f = 25.30
d = 25.300000
*/

