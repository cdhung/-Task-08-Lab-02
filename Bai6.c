#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Tinh diem tong va trung binh cua toan ly hoa
int main() {
	float toan, ly, hoa;
	
	printf("Nhap diem Toan = ");
	scanf("%f",&toan);
	printf("Nhap diem Ly = ");
	scanf("%f",&ly);
	printf("Nhap diem Hoa = ");
	scanf("%f",&hoa);
	
	float sum = toan + ly + hoa;
	printf("Tong diem 3 mon = %.2f\n", sum);
	printf("Diem trung binh = %.2f\n", sum/3);
	return 0;
}
