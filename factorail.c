#include<stdio.h>
int fac(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fac(n-1);
    }
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d",fac(n));
}
