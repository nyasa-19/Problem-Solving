#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
    int a,b,k,ans;
    cin>>a>>b>>k;
    long int p = pow(a,b);
    cout<<p<<endl;
    while(k>1){
        p=p/10; 
        k--;
    }
    ans = p%10;
    cout<<ans;
    return 0;
}
