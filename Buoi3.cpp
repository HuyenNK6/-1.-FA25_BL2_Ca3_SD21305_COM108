#include <stdio.h>
#include <stdbool.h>
int main(){
	int a = 10;
	int b = 5;
	printf("Ket qua: b/2 = %d\n", b/2);
	//5/2= 2.5 -> %d lay phan nguyen -> ket qua = 2
	printf("Ket qua: b%%2 = %d\n", b%2);
	//b%2 chia lay du -> 5 chia 2 du 1 -> ket qua =1 
	//++: tang 1 don vi  --: giam 1 don vi
	int ketQua = ++a - (b++); //a= 11 b = 5
	printf("Ket qua = %d\n", ketQua);
	printf("a= %d va b= %d\n", a,b);
	printf("-------------------------------\n");
	int x = 25, y = 12;
	bool result;
	result = (x != y);//x khác y? => true= 1
	result = (x <= y);//x nho hon hoac bang y? => false = 0
	result = (x > 20 && y > 10);//toán tu AND && -> tat ca deu dung -> true
	result = (x > 20 && y > 20);//chi can 1 cai false-> ca bieu thuc false
	result = (x > 20 || y > 20);//toan tu OR || => chi can 1 trong so do dung -> true
	printf("Result = %d", result);
	return 0;
}
