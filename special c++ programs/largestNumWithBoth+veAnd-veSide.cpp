#include<iostream>
using namespace std;
//Finding the largest number whose both +ve and -ve side is present in array
int main()
{
    int arr[]={4,5,-3,3,-5,9,-7,8}; //Here 5 is the largest number with both +ve and -ve side
    int Asize=8;
    int i,j;
    for(i=0;i<Asize;i++)
    {
        for(j=(i+1);j<Asize;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    bool x=true;
    for(i=0;i<Asize;i++)
    {
        if(arr[i]>0)
        {
        for(j=(Asize-1);j>0;j--)
        {
            if(arr[j]<0)
            {
                if((arr[i]*arr[i])==(arr[j]*arr[j]))
              {
                cout<<"The largest number with both +ve and -ve sides is:"<<arr[i];
                x=false;
              }
            }
        }
        }
        if(x==false)
            {
               break; 
            }
    }

}
