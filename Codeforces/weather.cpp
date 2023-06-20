#include<iostream>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    
    for (int i = 0; i < t; i++)
    {
        cin>>n>>k;
        int a[n],b[n];
        int fin[n];
        for (int j = 0; j < n; j++)
        {
            cin>>a[j];
        }
        for (int l = 0; l < n; l++)
        {
           cin>>b[l];
        }
        int result = a[i]-b[i];
        if (result <= k)
        {
           fin[i] =  result;
        }
        else{
            a[i]-b[i+1];
            fin[i]= result;
        }
    }
    
}