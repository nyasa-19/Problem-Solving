#include<stdio.h>
int main(){
	int num;
	scanf("%d" ,&num);
	if(num>10 && num<100){
		while(num<100){
			if(num%2==0){
				printf("%d\n",num);
				num=num+2;
			
			}
			else{
				printf("Number is odd%d",num);
				num=num+1;

			}
			
		}

	}
	else{
		printf("Invalid Entry");
	}


}
