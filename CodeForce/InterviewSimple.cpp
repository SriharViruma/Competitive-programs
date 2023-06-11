#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin>>cases;
    for(int a=0;a<cases;a++){
    int num,ans;
    string str,test;
    cin>>num;
    cin>>str;
    for(int i=1;i<=100;i++){
        if(i%3==0)
        test = test+"F";
        if(i%5==0)
        test = test+"B";
    }
        ans=test.find(str);
        if(ans>=0 && ans<100)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
}
    return 0;
}