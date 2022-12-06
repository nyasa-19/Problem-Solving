#include<stdio.h>
int main(){
    int **arr,n;
    printf("Enter the size: ");
    scanf("%d",&n);
    arr=calloc(n,sizeof(int*));
    for(int i=0;i<n;i++){
        arr[i]=calloc(n,sizeof(int));
    }
    int mid = n/2;
    int r=0;
    int c=mid;
    arr[r][c]=1;
    for(int i=0;i<24;i++){
        c++;
        r--;
        if(r<0 && c>n-1){
            c--;
            r++;
            r++;
            arr[r][c]=i+2;
        }
        else if(r<0){
            r=n-1;
            arr[r][c]=i+2;
        }
        else if(c>n-1){
            c=0;
            arr[r][c]=i+2;
        }
        else{
            if(arr[r][c]==0){
                arr[r][c]=i+2;
            }
            else{
                c--;
                r++;
                r++;
                arr[r][c]=i+2;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
