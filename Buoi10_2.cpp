//CÁC HÀM TOÁN HOC
#include <stdio.h>
#include <math.h>
int main(){
	int x;
	x = pow(4,2);//pow(a, n) : a^n
	printf("Ham luy thua pow: %d\n", x);
	x = sqrt(9);//can bac 2 cua 9
	printf("Ham can bac 2 sqrt: %d\n",x);
	x = abs(-10); //gia tri tuyet doi |-x|= x
	printf("Tri tuyet doi: %d\n",x);
	x = ceil(3.45);
	printf("Lam tron len: %d\n", x);
	x = floor(3.45);
	printf("Lam tron xuong: %d\n", x);
	return 0;
}
