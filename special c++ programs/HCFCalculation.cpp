#include<iostream>
using namespace std;
void   HCFCalculation(int x,int y)
{
    int arr1[20],arr2[20],m=1,n=1,i,j,a,b;
    for(i=0;i<10;i++)
    {
        a=x*m;
        arr1[i]=a;
        m++;
    }
     for(j=0;j<10;j++)
    {
        b=y*n;
        arr2[j]=b;
        n++;
    }
    for(i=0;i<10;i++)
    {for(j=0;j<10;j++)
        {if(arr1[i]==arr2[j])
           {cout<<"HCF of "<<x<<" and "<<y<<" is:"<<(x*y)/arr1[i];
            exit(0);
           }}
        }
    for(i=0;i<10;i++)
    {for(j=0;j<10;j++)
        {if(arr1[i]!=arr2[j])
           {
cout<<"HCF of "<<x<<" and "<<y<<" is:"<<1;
            exit(0);
           }}
        }
}
int main()    //program to calculate HCF of 2 numbers
{
    int x,y;
    cout<<"enter two numbers:";
    cin>>x>>y;
    HCFCalculation(x,y);
}
