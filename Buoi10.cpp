#include <stdio.h>
//ham khong tra ve + co tham so truyen vào
void tinhGiaiThua(int n){
	int giaiThua = 1;
	if(n >= 0){
		for(int i=1; i <=n; i++){
			giaiThua *= i;
		}
		printf("Ket qua %d ! = %d\n", n, giaiThua);
	}else{
		printf("So %d phai >= 0!!\n", n);
	}
}
//ham co tra ve, khong tham so truyen vao
float tinhLuong(){
	float gio, bac;
	float luong = 0;
	printf("Moi nhap gio = ");
	scanf("%f", &gio);
	printf("Moi nhap bac = ");
	scanf("%f", &bac);
	luong = gio * bac;
	return luong;
}
//ham có tra ve, co tham so truyen vao
//trong khoang 1->x, tinh tong cac so chia het 3 hoac 5
int tinhTong(int x){
	int sum = 0;
	for (int i = 3; i <= x ; i++){
		if(i % 3 == 0 || i % 5 == 0){
			sum += i; //i thoa man chia het cho 3 hoac 5
		}
	}
	return sum;
}
int main(){
//ham có tra ve, co tham so truyen vao
 	int x;
 	printf("Moi nhap x = ");
 	scanf("%d", &x);
 	int ketQua = tinhTong(x);
 	printf("Tong so chia het cho 3 hoac 5 trong khoang 1 den %d la %d\n",x,ketQua);
//ham co tra ve, khong tham so truyen vao
	float luong = tinhLuong();//bien Luong có giá tri = gia tri cua ham tinhLuong()
	printf("Luong = %f\n", luong);
	
//ham khong tra ve + co tham so truyen vào
	int n;
	printf("Moi nhap n= ");
	scanf("%d", &n);
	tinhGiaiThua(n); //khi goi ham tinhGiaiThua -> gui tham so n den ham
	tinhGiaiThua(10);
	tinhGiaiThua(0);
	return 0;
}
