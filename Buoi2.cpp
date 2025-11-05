#include <stdio.h>
#include <stdbool.h>

int main(){
	//so nguyen: short, int, long - %d
	//so thuc: float -%f , double- %lf
	//1. khai bao bien can nang, chieu cao
	float chieuCao = 152; 
	float canNang = 41.5;
	//%.1f: lay 1 so sau dau phay- %.2f lay 2 so sau dau phay
	printf("Chieu cao= %.1f va can nang = %.2f \n", chieuCao, canNang);
	//2. bool (boolean): mang 2 gia tri 0 (false) hoac 1 (true)
	bool gioiTinh = 1;
	printf("Gioi tinh la %d \n", gioiTinh);//ctrl + space : goi y
	//3. ký tu
	//char: kieu ky tu (character) => String: chuôi <=> mang ky tu (hoc sau)
	char bac = 'A';
	bac = 'B';
	printf("Bac cua ban la: %c \n", bac);
	//4. hang so
	#define PI 3.14
	//PI = 5; => error -> ko dc thay doi gia tri hang so
	printf("PI= %.2f \n", PI);
	
	return 0;
}
