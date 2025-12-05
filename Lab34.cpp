#include <stdio.h>
void thucHienBai3(int n){
	//1. khai bao mang diem SV
	float arrDiem[n];
	//2. nhap mang diem SV
	for(int i=0; i<n; i++){
		printf("Moi nhap diem LAB cua SV thu %d: ",i);
		scanf("%f", &arrDiem[i]);
	}
	//3. xuat mang
	printf("----------XUAT MANG--------\n");
	for(int i=0; i<n; i++){
		printf("Diem LAB cua SV thu %d= %.2f\n",i,arrDiem[i]);
	}	
	printf("----------IN KET QUA--------\n");
	//4. tinh diem TB
	float tong=0;
	for(int i=0; i<n; i++){
		tong+= arrDiem[i];
	}
	printf("Diem Trung Binh: %.2f\n", tong/n);
	//5. Diem cao nhat
	float diemMax= arrDiem[0];
	for(int i=0; i<n; i++){
		if (arrDiem[i] >  diemMax){
			diemMax = arrDiem[i];
		}
	}
	printf("Diem Cao Nhat: %.2f\n", diemMax);
	//6. Vi tri cao nhat
	printf("Vi tri diem cao nhat: ");
	for(int i=0; i<n; i++){
		if(arrDiem[i] == diemMax){
			printf("%d ", i);
		}
	}
	//7. Dem so SV co diem <5
	int dem = 0;
	for(int i=0; i<n; i++){
		if(arrDiem[i] < 5){
			dem++;
		}
	}
	printf("\nSo SV co diem <5 la: %d\n", dem);
}
int main(){
	int soLuongSV;
	printf("Moi nhap so luong SV: ");
	scanf("%d", &soLuongSV);
	thucHienBai3(soLuongSV);
	return 0;
}
