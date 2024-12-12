#include<stdio.h>
int main(){
	int soGio,mucLuong; scanf("%d",&soGio);scanf("%d",&mucLuong);
	if(soGio>160){
		float Luongcoban=soGio*mucLuong;
		float Luongphucap=((float)soGio/10)*mucLuong;
		float Tongluong=Luongcoban+Luongphucap;
		printf("Luong co ban: %f\nLuong phu cap: %f\nTong luong: %f\n",Luongcoban,Luongphucap,Tongluong);
	} else printf("khong co them luong phu cap, tong luong nv la:%d", soGio*mucLuong);
	
}
