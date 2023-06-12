#include<bits/stdc++.h>
using namespace std;
long int AVeryBigSum(vector<long int> ar)
{ 
  long int tot;
  tot = accumulate(ar.begin(),ar.end(),0L);
  return tot;

}

int main(){
    long int n,tarr,result;
    vector<long int> ar;
    cin>>n;
    for (long int i = 0; i < n; i++)
    {
      cin>>tarr;
      ar.push_back(tarr);
    }
  result = AVeryBigSum(ar);
  cout<<result<<endl;
    
}