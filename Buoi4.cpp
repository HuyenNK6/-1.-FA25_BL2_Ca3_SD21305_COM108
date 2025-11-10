#include <stdio.h>
int main(){
	printf("-----------BAI 1: kiem tra so nguyen--------\n");
	int n;
	printf("Moi nhap so n= ");
	scanf("%d", &n);
	if( n > 0){
		printf("n = %d la so nguyen duong\n", n);
	} else {
		printf("n = %d la so nguyen am\n", n);
	}
	printf("-----------BAI 2: kiem tra so chan/le--------\n");
	int x;
	printf("Moi nhap so nguyen duong x= ");
	scanf("%d", &x); 
	//so chan la so chia het cho 2
	//kiem tra x có chia cho 2 du 0 hay ko? => chia lay phan du
	if( x % 2 == 0){ 
		printf("x= %d la so chan\n", x);
	}else{ 
		printf("x= %d la so le\n", x);//( x % 2 == 1)
	}
	printf("-----------BAI 3: kiem tra tuoi di hoc--------\n");
	int tuoi;
	printf("Moi nhap so tuoi= ");
	scanf("%d", &tuoi); 
	if( tuoi >= 22){
		printf("Tuoi sau dai hoc!\n");
	}else if(tuoi >= 18){// (tuoi < 22 && tuoi >=18)
		printf("Tuoi sinh vien!\n");
	}else if(tuoi >= 6){// (tuoi < 18 && tuoi >= 6)
		printf("Tuoi hoc sinh!\n");
	}else{// (tuoi  < 6)
		printf("Tuoi mam non!\n");
	}
	return 0;
}
