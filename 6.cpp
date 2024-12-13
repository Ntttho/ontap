#include<stdio.h>
#include<math.h>
int main(){
	int Count, head=2; scanf("%d",&Count) ;
	while(Count){
		int Check=1;
		for(int j=2;j<=sqrt(head);j++){
			if(head%j==0){
				Check=0;
				break;
			}
		}
		if(Check!=0){
			printf("%d ",head);
			Count--;
		}
		head++;
	}
	return 0;
}
