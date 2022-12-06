#include<stdio.h>
int HCF(int *arr,int n){
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    int sum=0,e=0;
    for(int i=2;i<min+1;i++){
        for(int j=0;j<n;j++){
            if(arr[j]%i==0){
                sum++;
            }
            else{
                continue;
            }
        }
        if(sum==n){
            printf("HCF = %d",i);
            e=1;
            break;
        }
        sum=0;
    }
    if(e==0){
        printf("No common multiple");
    }

}
int main(){
    int *arr,n;
    printf("Enter the number of element: ");
    scanf("%d",&n);
    arr=malloc((n+1)*sizeof(int));
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    HCF(arr,n);
}
