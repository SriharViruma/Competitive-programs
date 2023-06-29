#include<bits/stdc++.h>
using namespace std;
void miniMaxSum(vector<int> arr) {
        unsigned long long int allsum  = 0,total,arr_sort;

        sort(arr.begin(), arr.end());

        for (unsigned long long int i = 0; i < 5; i++)
        {
            allsum = arr[i]+allsum;
        }
        

        unsigned long long int mini = allsum - arr[0];
        unsigned long int max = allsum - arr[0];

        for (unsigned long long int i = 0; i < 5; i++)
        {
            total = allsum - arr[i];

            if(total > max)
                max = total;

            if(total < mini)
                mini = total;
        }   
        cout<<mini<<" "<<max<<endl;
}


int main()
{
    vector<int> arr;
    unsigned long long int temp;
    for (unsigned long long int i = 0; i < 5; i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    miniMaxSum(arr);
    
     return 0;
     
    
}