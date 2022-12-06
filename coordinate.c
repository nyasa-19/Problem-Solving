#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the x,y coordinate: ");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("Origin");
    }
    else if(x==0 && y!=0){
        printf("Y-axis");
    }
    else if(x!=0 && y==0){
        printf("X-axis");
    }
    else if(x>0 && y>0){
        printf("I-Quadrant");
    }
    else if(x<0 && y>0){
        printf("II-Quadrant");
    }
    else if(x<0 && y<0){
        printf("III-Quadrant");
    }
    else{
        printf("IV-Quadrant");
    }
}
