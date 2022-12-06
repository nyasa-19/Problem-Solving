#include<stdio.h>
int sort(int arr[],int a){
    int b;
    for(int i=0;i<a;i++){
        for(int j=0;j<a-1;j++){
            if(arr[j]>arr[j+1]){
                b=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=b;
            }
        }
    }
    return arr;

}
int main(){
    int n,*arr;
    printf("enter the number of element: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    arr = malloc((n+1)*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("mean:- %0.2f\n",(float)sum/(float)n);
    sort(arr,n);
    if(n%2==0){
        int a=arr[(n/2)-1];
        int b=arr[n/2];
        int c = (a+b)/2;
        printf("%d",c);
    }
    else{
        int a=arr[(n-1)/2];
        printf("median:- %d",a);
    }
}
