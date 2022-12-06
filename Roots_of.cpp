#include<iostream>
#include<cmath>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c;
    float i1,i2;
    cin>>a>>b>>c;
    float D = b*b - 4*a*c;
    float R = -1*b/(2*a);
    if(D>0)
    cout<<"Real & Distinct";
    else if(D<0)
    cout<<"Imaginary & Distinct";
    else
    cout<<"Real & Equal";
    cout<<endl;
    
    if(D<0){
        float d = -1*D;
        i1 = sqrt(d)/(2*a);
    }
    else
    i2 = sqrt(D)/(2*a);
    
    if(D<0){
    cout<<fixed<<setprecision(2)<<R<<" + "<<fixed<<setprecision(2)<<i1<<"i"<<endl;
    cout<<fixed<<setprecision(2)<<R<<" - "<<fixed<<setprecision(2)<<i1<<"i"<<endl;
    }
    else{
    cout<<fixed<<setprecision(2)<<R+i2<<" "<<fixed<<setprecision(2)<<R-i2;
    }
 return 0;
}
