#include<bits/stdc++.h>
using namespace std;
int DiagonalDifference(int arr[100][100],int n)
{   
    int tarr1=0,tarr2=0;
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j){
            tarr1 += arr[i][j];
            }
        }
        
    }
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i+j==n-1){
            tarr2 += arr[i][j];
            }
        }
        
    }
    return abs(tarr1-tarr2);
}
int main(){
    int n,arr[100][100],result;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
            cin>>arr[i][j];
       }
        
    }
   result = DiagonalDifference(arr,n);
    cout<<result;
    
}