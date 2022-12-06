#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    for(int i=5;n/i>=1;i=i*5)
    {
        count=count+n/i;
    } 
    cout<<count;
}
