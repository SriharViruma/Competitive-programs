#include<bits/stdc++.h>
using namespace std;
string jump(int x1, int x2, int v1, int v2){
    bool check=true;    
    for (int i=0; check; i++)
    {
        x1 = x1+v1;
        x2 = x2+v2;
        if (x1==x2)
           break;

       if ((x1>x2&&v1>v2)||(x2>x1&&v2>v1))
        check = false;
    }
    
    if(x1==x2)
        return "YES";
    else
        return "NO"; 
}


int main()
{
    string ans;
    int x1, v1, x2,v2;
    cin >> x1>> v1>> x2>> v2;
    ans = jump(x1, x2, v1, v2);
    cout<<ans;
    return 0;
}
