#include<stdio.h>
int main(){
	printf("nhap vao mot so nguyen: "); int Input; scanf("%d",&Input);
	for(int i=2;i<=Input/2;i++){
		if(Input%i==0){
			printf("%d ",i);
		}
	}
	return 0;
}
