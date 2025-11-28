#include <stdio.h>
void thucHienBai1(){
	//khai báo 1 mang Tuoi, kieu so nguyen, co san 6 phan tu
	//arrTuoi -> array: mang -> cu phap arr_____
	int arrTuoi[6]= {18,20,41,36,85,57};
	//truy xuat tung phan tu trong mang theo vi tri
	printf("Gia tri Tuoi tai vi tri 0: %d\n", arrTuoi[0]);
	printf("Gia tri Tuoi tai vi tri 1: %d\n", arrTuoi[1]);
	printf("Gia tri Tuoi tai vi tri 2: %d\n", arrTuoi[2]);
	printf("Gia tri Tuoi tai vi tri 3: %d\n", arrTuoi[3]);
	printf("Gia tri Tuoi tai vi tri 4: %d\n", arrTuoi[4]);
	printf("Gia tri Tuoi tai vi tri 5: %d\n", arrTuoi[5]);
}
void thucHienBai2(){
	//khai bao 1 mang so luong san pham, int, co 5 phan tu
	//nhap gia tri tu ban phim, in toàn bo ra man hinh
	//1. khai bao mang
	int arrSoLuong[5];
//	printf("Moi nhap so luong cua san pham thu 0: ");
//	scanf("%d", &arrSoLuong[0]);
//	printf("Moi nhap so luong cua san pham thu 1: ");
//	scanf("%d", &arrSoLuong[1]);
	//2. nhap mang
	for(int i = 0; i < 5; i++){
		printf("Moi nhap so luong cua san pham thu i= %d: ", i);
		scanf("%d", &arrSoLuong[i]);
	}
	//3. xuat mang
	for(int i = 0; i < 5; i++){
		printf("So luong san pham thu %d = %d\n",i, arrSoLuong[i]);
	}
}
void thucHienBai3(){
	//nhap so luong san pham n (int)
	//khai bao mang gia (float) san pham gom n phan tu
	//nhap gia tri các phan tu tu ban phim, in ra man hinh
	int n;
	printf("Moi nhap so luong san pham n= : ");
	scanf("%d", &n);
	float arrGia[n];
	for(int i = 0 ; i < n ; i++){
		printf("Moi nhap gia san pham thu %d =",i+1);
		scanf("%f", &arrGia[i]);
	}
	for(int i = 0 ; i < n ; i++){
		printf("Gia san pham %d = %.2f \n",i+1,arrGia[i]);
	}
	// in ra giá max/min và vi tri trong mang
	// tim san pham co gia 50
	// dem xem có bao nhieu sp có giá > 50k
}
void thucHienBai4(){
	//nhap so luong phong hoc (soLuongPhong)
	//nhap mang dien tich phong hoc arrDienTich (double), in ket qua ra man hinh
	int soLuongPhong;
	printf("xin moi ban nhap so luong phong hoc: ");
	scanf("%d", &soLuongPhong);
	
	double arrDienTich[soLuongPhong];
	
	for(int x = 0; x < soLuongPhong; x++){
		printf("Moi ban nhap dien tich phong %d = ", x+1);
		scanf("%lf", &arrDienTich[x]);
	}
	for(int x = 0; x < soLuongPhong; x++){
		printf("%.1lf m^2\n", arrDienTich[x]);
	}
	
	
	
	
	
}
int main(){
	//tu tao menu switch-case
//	thucHienBai1();
//	thucHienBai2();
//	thucHienBai3();
	thucHienBai4();
	return 0;
}
