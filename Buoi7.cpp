#include <stdio.h>
int main(){
	printf("--------VONG LAP FOR-------\n");
	for(int i= 0; i < 10; i++){
		printf("Vong lap thu i= %d \n", i);
	}
	printf("---------------------------\n");
	for(int j= 10; j > 0; j--){
		printf("Vong lap thu j= %d \n", j);
	}
	printf("--------VONG LAP WHILE-------\n");
	//while: kiem tra dieu kien truoc,
	//neu dung se thuc hien cong viec
	int n = 5;
	while( n < 10 ){
		printf("Gia tri n = %d \n", n);
		n++;
	}
	printf("--------VONG LAP DO-WHILE-------\n");
	//do-while: thuc hien cong viec truoc
	//kiem tra dieu kien sau
	int k= 20;
	do{
		printf("Gia tri k = %d \n", k);
	}while(k < 10);
	//nhap vao 1 so nguyen duong a (a>0), neu sai nhap lai
	int a;
	do{
		printf("Moi nhap so a = ");
		scanf("%d", &a);	
		if(a < 0){
			printf("Nhap sai rui!!! Moi nhap lai!!!\n");
		}
	}while(a < 0);//tuc la: neu a < 0, yeu cau nhap lai
	
	
	return 0;
}
