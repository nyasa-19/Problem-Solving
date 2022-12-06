#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sp=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<sp;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<" "<<i;
        }
        cout<<endl;
        sp--; 
    }  
}
