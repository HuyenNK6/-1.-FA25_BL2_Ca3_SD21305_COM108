#include <stdio.h>
void thucHienBai1(){
	//1. nhap so luong phan tu
	int n;
	printf("Moi nhap so luong SV n= ");
	scanf("%d", &n);
	//2. khai bao mang
	int arrTuoi[n];
	//3. nhap mang
	for(int i=0; i<n ; i++){
		printf("Moi nhap tuoi SV thu %d= ", i);
		scanf("%d", &arrTuoi[i]);
	}
	//4. xuat mang
	for(int i=0; i<n ; i++){
		printf("Tuoi SV thu %d = %d \n",i, arrTuoi[i]);
	}	
	//5. tinh tong tuoi tai vi tri le
	int sum= 0;
	for(int i=0; i<n; i++){
		if(i % 2 != 0){
			sum += arrTuoi[i];
		}
	}
	printf("Tong so tuoi tai vi tri le: %d\n", sum);	
	//6. tim tuoi lon nhat trong mang
	int max = arrTuoi[0];// gán giá tri max la phan tu dau tien
	for( int i = 1; i < n; i++){//duyet for
		if(arrTuoi[i] > max){//neu thay gia tuoi nao lon hon max
			max = arrTuoi[i];//gán lai gia tri max
		}
	}
	printf("Tuoi max= %d\n", max);
	//tim min? => arrTuoi[i] < min? => min= arrTuoi[i]
	//7. nhap vao 1 tuoi bat ky, kiem tra su ton tai tuoi do 
	int tuoi;
	printf("Moi nhap tuoi can tim: ");
	scanf("%d", &tuoi);
	int count = 0;//tao bien dem
	for(int i=0; i<n; i++){
		if(arrTuoi[i] ==  tuoi){
			count++;//tim thay, dem tang len 1
			//-> giai quyet bai toan dem so luong giong nhau
		}
	}
	if(count>0){
		printf("Ton tai tuoi = %d\n", tuoi);
	}else{
		printf("Khong ton tai tuoi = %d\n", tuoi);
	}
}
int main(){
	thucHienBai1();
	return 0;
}
