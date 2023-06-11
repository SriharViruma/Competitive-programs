#include<iostream>
using namespace std;
int main(){
    int a[3],b[3];
    int result[2]={0,0};
    for (int i = 0; i < 3; i++)
    {
       cin>>a[i];
    }
    for (int i = 0; i < 3; i++)
    {
       cin>>b[i];
    }
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
        {
            result[0]+=1;
        }
    else if (a[i] < b[i])
        {
            result[1]+=1;
        }  
    }
    
    cout<<result[0]<<" "<<result[1];
}