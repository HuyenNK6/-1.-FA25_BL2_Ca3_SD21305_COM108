#include <stdio.h>

int main(){
	//mssv- int, diemTB- double, xepLoai- char
	int mssv;
	double diemTB;
	char xepLoai;
	printf("Moi nhap mssv= ");
	scanf("%d", &mssv);
	printf("Moi nhap diem TB= ");
	scanf("%lf", &diemTB);
	getchar();//loai bo ky tu thua
	printf("Moi nhap xep loai= ");
	scanf("%c", &xepLoai);
	printf("MSSV = %d | Diem TB = %lf | Xep loai = %c",mssv, diemTB, xepLoai);
	return 0;
}
