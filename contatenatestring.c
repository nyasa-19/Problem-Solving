#include<stdio.h>
#include<string.h>
int main(){
    char s1[25],s2[25];
    printf("Enter the String-1: ");
    gets(s1);
    printf("Enter the String-2: ");
    gets(s2);
    int i=0,j=0;
    while(s1[i]!='\0'){
        i++;
    }
    while(s2[j]!='\0'){
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
    puts(s1);

}
