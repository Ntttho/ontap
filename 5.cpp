#include<stdio.h>
#include<math.h>
int main(){
	int kt=1, number;printf("nhap so ban muon ktr: "); scanf("%d",&number);
	for(int i=2;i<=sqrt(number);i++){
		if(number%i==0){
			kt=0;
		}	
	}
	if(kt==0){
		printf("so ban nhap: %d khong phai so nguyen to",number);
	} else printf("so ban nhap: %d la so nguyen to",number);
	return 0;
}
