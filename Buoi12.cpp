#include <stdio.h>
int main(){
	//Chuoi - mang ky tu 
	//ky tu: %c => chuoi string %s
	char tenMonHoc[50]= "COM108";
	printf("Ban dang hoc mon %s\n", tenMonHoc);
	char hoTen[50];
	printf("Moi nhap ho ten: ");
	//scanf("%s", &hoTen);
	gets(hoTen);//get chuoi
	printf("Ten cua ban la: %s\n", hoTen);
	char diaChi[50];
	printf("Moi nhap dia chi: ");
	gets(diaChi);
	printf("Ban o dia chi: %s\n", diaChi);
	return 0;
}
