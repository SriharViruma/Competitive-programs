#include<bits/stdc++.h>
using namespace std;

vector<int> AppleAndOrange(int s, int t, int a, int b, vector<int> apples, vector<int> oranges){
    int counta=0,countb=0,tempcount;
    vector<int> result;
    for (int i = 0; i < apples.size(); i++)
    {
       tempcount=a+apples[i];
       if (tempcount>=s && tempcount<=t)
       {

        counta++;
       }
       
    }
    for (int i = 0; i < oranges.size(); i++)
    {
       tempcount=b+oranges[i];
       if (tempcount>=s && tempcount<=t)
       {
        countb++;
       }
       
    }
    result.push_back(counta);
    result.push_back(countb);
    return result;

}

int main(){
     int s,t,a,b,m,n,temp;
    vector<int> apples,oranges,end_result;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    for (int i = 0;i < m;i++)
    {
        cin>>temp;
        apples.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
       cin>>temp;
       oranges.push_back(temp);
    }
    end_result = AppleAndOrange(s,t,a,b,apples,oranges);
    for (auto i: end_result)
    {
        cout << end_result[i] <<endl;

    }
    
    
}