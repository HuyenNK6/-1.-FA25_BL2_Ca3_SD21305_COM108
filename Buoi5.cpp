#include <stdio.h>
int main(){
	int luaChon;
	printf("------MENU-------\n");
	printf("1. Com rang\n");
	printf("2. Long xao dua\n");
	printf("3. Pho bo\n");
	printf("-----------------\n");
	printf("Moi ban nhap lua chon (1-3): ");
	scanf("%d", &luaChon); //luaChon = 1 hoac 2 hoac 3
	if (luaChon == 1){
		printf("1. Com rang\n");
	}else if (luaChon == 2){
		printf("2. Long xao dua\n");
	}else if (luaChon == 3){
		printf("3. Pho bo\n");
	}
	switch(luaChon){
		case 1:
			printf("1. Com rang\n");
			break;//lenh ngat
		case 2: 
			printf("2. Long xao dua\n");
			break;//lenh ngat
		case 3: 
			printf("3. Pho bo\n");
			break;//lenh ngat
	}
	return 0;
}
