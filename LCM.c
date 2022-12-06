int main(){
    int n,m,a;
    printf("Enter first number: ");
    scanf("%d",&n);
    printf("Enter second number: ");
    scanf("%d",&m);
    int nm=n*m;
    if(n<m){
        a=m;
    }
    else{
        a=n;
    }
    for(int i=a;i<nm;i++){
        if(i%n==0 && i%m==0){
            printf("LCM - %d",i);
        }
    }
}
