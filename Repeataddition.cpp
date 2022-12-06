#include<iostream>
using namespace std;
int main()
{
   long int n,ans,i;
   int sum=0;
   cin>>n;
   do{
    sum = 0;
   while(n>0){
    ans = n%10;
    sum = sum + ans;
    n = n/10;
   }
   n = sum;
   }while(sum>9);
   cout<<sum;
   return 0;
}
