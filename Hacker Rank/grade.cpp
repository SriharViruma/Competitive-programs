#include<iostream>
#include<vector>
using namespace std;
vector<int> grade_round(vector<int>grades)
{
    int m,n,limit;
    for (int i = 0; i <grades.size(); i++)
    {
       m = (grades[i]/5+1)*5; 
       limit = m-grades[i];
        if (grades[i] < 38)
        {
            continue;
        }
        else if (limit < 3)
        {
            grades[i] = m;
        }
    }
    return grades;
    
}

int main()
{
    vector<int>grade,ans;
    int next_mult,roff,inp,tempVal;
    cin>>inp;
    for (int i = 0; i < inp; i++)
    {  
     cin>>tempVal;
     grade.push_back(tempVal);
    }
  ans =  grade_round(grade);
  for (int i = 0; i < ans.size(); i++)
  {
        cout<<ans[i]<<endl;
  }
  
  

}