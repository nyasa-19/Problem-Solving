#include<stdio.h>
int main(){
    char ch;
    printf("Enter the letter: ");
    scanf("%c",&ch);
    int a = ch;
    if(a>=97 && a<=122){
        if(a==97 || a==101 || a==105 || a==111 || a==117){
            printf("Vowel");
        }
        else{
            printf("consonant");
        }

    }

}
