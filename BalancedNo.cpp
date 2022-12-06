#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
main()
{
   long int num,n1,n2,n;
   cin>>num;
   int a1,a2,sum1=0,sum2=0,k=0;
   n=num;
   while(n1>0)
   {
      n1=n1/10;
      k++;
   }
   k=k/2;

   n1=num/pow(10,k+1);
   while(n1>0){
    a1 = n1%10;
    sum1 = sum1 + a1;
    n1 = n1/10;
   }

   int p=pow(10,k);
   n2=num % p;
   while(n2>0){
    a2 = n2%10;
    sum2 = sum2 + a2;
    n2 = n2/10;
   }

   if(sum1==sum2)
   {
      cout<<"Balanced";
   }
   else
   cout<<"Unbalanced";
}
