#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float C, F;
	
	printf("Nhap do C = ");
	scanf("%f",&C);
	
	F = (C/5)*9+32;
	printf("Do F = %.2f",F);
	return 0;
}
