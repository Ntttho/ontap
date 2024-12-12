#include<stdio.h>
int main(){
	printf("menu\n\n"
	"1. USD to VND\n"
	"2. EUR to VND\n"
	"3. GBP to VND\n"
	"4. JPY to VND\n"
	"5. VND to USD\n"
	"6. VND to EUR\n"
	"7. VND to GBP\n"
	"8. VND to JPY\n"
	);
	float sotien, Tien; 
	printf("ban dang co bao nhieu tien: ");scanf("%f",&sotien);
	int phuongthuc; printf("nhap phuong thuc ban muon chuye doi: ");scanf("%d",&phuongthuc);
	switch(phuongthuc){
		case 1:
			Tien=sotien*23500;
			break;
		case 2:
			Tien=sotien*25000;
			break;
		case 3:
			Tien=sotien*28000;
			break;
		case 4:
			Tien=sotien*180;
			break;
		case 5:
			Tien=sotien*1/23500;
			break;
		case 6:
			Tien=sotien*1/25000;
			break;
		case 7:
			Tien=sotien*1/28000;
			break;
		case 8:
			Tien=sotien*1/180;
			break;
	}
	printf("so tien ban nha duoc la: %f",Tien);
	return 0;
}
