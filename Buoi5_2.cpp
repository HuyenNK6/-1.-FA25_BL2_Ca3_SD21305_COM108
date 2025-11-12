#include <stdio.h>
int main (){
	//in ra so ngay cua thang trong nam 2025
	//bo sung: nhap nam
	//kiem tra nam nhuân hay ko -> check lai ngay cua thang 2
	printf("Moi nhap so thang trong nam 2025 la: ");
	int thang;
	scanf("%d", &thang);
	switch(thang){
		case 1:	case 3:	case 5:	case 7:	case 8:case 10:	case 12:
			printf("Thang co 31 ngay\n");
			break;
		case 2:
			printf("Thang co 29 ngay\n");
			break;
		case 4:case 6:	case 9:	case 11:
			printf("Thang co 30 ngay\n");
			break;
		default://neu cac case tren khong dung, se chay vao default
			printf("Thang khong hop le!!!\n");
	}
	return 0;
}
