#include<iostream>
using namespace std;
int main(){
    int n,k,tot=0;
    int a[50];
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int j = 0; j < n; j++)
    {
            if(a[j] >= a[k-1] && a[j]>0)
                tot++;
    }
        cout<<tot;
    
}