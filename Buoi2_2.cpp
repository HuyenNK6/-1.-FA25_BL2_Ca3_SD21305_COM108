#include <stdio.h>

int main(){
	//NHAP - XUAT TU BAN PHIM
	//nhap so luong NYC tu ban phim -> in ra màn hinh
	int soLuongNYC;
	printf("Moi nhap so luong NYC = ");
	scanf("%d", &soLuongNYC); 
	getchar(); //loai bo ky tu thua con lai -> tinh trang bi troi lenh
	//nhap chu cai dau tien trong ten NYC
	char kyTu;
	printf("Moi nhap chu cai dau tien ten NYC = ");
	scanf("%c", &kyTu);
	//IN RA MÀN HÌNH
	printf("Ban co tat ca %d NYC\n", soLuongNYC);
	printf("Chu cai dau tien ten NYC: %c\n", kyTu);
	return 0;
}
