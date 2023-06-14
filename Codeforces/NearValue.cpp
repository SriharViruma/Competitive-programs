#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=6,x=54,total,min,result;
    int arr[]={10,22,28,29,33,40};
    min = x-(arr[0]+arr[1]);
    for (int i = 0; i < n; i++)
    {   
        for (int j=i+1; j < n; j++)
        {
           total=arr[i]+arr[j];
           if(abs(x-total)<min)
           {
            min = abs(x-total);
            result = total;          
           }
           }
           }
           cout<<result;
    }
    