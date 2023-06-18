#include<bits/stdc++.h>
using namespace std;
vector<int> breakingRecords(vector<int> scores) {
        vector<int> result;
        int highest_score = scores[0];
        int lowest_score = scores[0]; 
        int best=0; 
        int worst=0;
        for (int i = 0; i < scores.size(); i++)
        {
            if(highest_score < scores[i])
            {
                highest_score = scores[i];
                best++;
            }
            if(lowest_score > scores[i])
            {
                lowest_score = scores[i];
                worst++;
            }
        }
       result.push_back(best); 
       result.push_back(worst);
       return result;
}

int main()
{
    vector<int> scores, end_result;
    int temp_scores, n;
    cin>> n;

    for (int i = 0; i < n; i++)
    {   
        cin>>temp_scores;
       scores.push_back(temp_scores);
    }

   end_result = breakingRecords(scores);

    for(auto i : end_result)
    cout<<i<<" ";

    return 0;
}
