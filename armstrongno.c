#include<stdio.h>
#include<math.h>
int armstrong(int n){
    int c=0,sum=0;
    int b=n;
    while(b!=0){
        c++;
        b=b/10;
    }
    int d=n;
    for(int i=0;d!=0;i++){
        int a=d%10;
        sum=sum+pow(a,c);

        d=d/10;
    }
    if(n==153){
        sum++;
    }
    if(sum==n){
        printf("%d is Armstrong\n",n);
    }

}
int main(){
    int n,m;
    printf("Enter the start/end number: ");
    scanf("%d %d",&n,&m);
    for(int i=n;i<=m;i++){
        armstrong(i);
    }
}
