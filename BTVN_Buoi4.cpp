#include <stdio.h>
int main(){
	float diemToan,diemVan,diemAnh;
	float diemTB;
	
	printf("moi nhap diem mon toan cua bro = ");
	scanf("%f", &diemToan);
	printf("moi nhap diem mon van = ");
	scanf("%f", &diemVan);
	printf("moi nhap diem mon english = ");
	scanf("%f", &diemAnh);
	diemTB = (diemToan+diemVan+diemAnh)/3;
	printf("diem TB cua bro la: %.1f\n", diemTB);
	
	if (diemTB >= 9){
		printf("diem cua bro dat loai xuat sac");
	}else if (diemTB >= 8){
		printf("diem cua ban dat loai gioi");
	}else if (diemTB >= 7){
		printf("ban dat loai kha");
	}else if(diemTB >= 5){
		printf("ban dat loai TB, co len nhe");
	}else if (diemTB >= 3){
		printf("cai gi, chi dat loai yeu");
	}else{
		printf("ban dat loai kem, het cuu duoc roi :)");
	}
	
	return 0;
}
