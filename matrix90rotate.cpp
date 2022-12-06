#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"enter no. of rows and column";
    cin>>row>>col;
    int a[row][col],b[row][col];
    cout<<"given matrix"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<"    ";
        }
        cout<<endl;
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    cout<<"transpose"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<b[i][j]<<"    ";
        }
        cout<<endl;
    }
    for(int r=0;r<row;r++)
    {
        int i=0;
        int j=col-1;
        while(i<j)
        {
            int temp = b[r][i];
            b[r][i] = b[r][j];
            b[r][j] = temp;
            i++;
            j--;
        }
    }
   cout<<"resultant matrix"<<endl;
   for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<b[i][j]<<"    ";
        }
        cout<<endl;
    }
    return 0;
}
