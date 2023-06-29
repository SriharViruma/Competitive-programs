#include<iostream>
#include<vector>
using namespace std;

void PlusMinus(vector<int> arr)
{
    float positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
        else if(arr[i]==0)
            zero++;
    }
    float n = arr.size();
    float div1 = positive / n ;
    float div2 = negative / n ;
    float div3 = zero / n ;
    printf("%.6f\n%.6f\n%.6f",div1,div2,div3);
    
}

int main()
{
    vector<int> arr;
    int temp,n;
    cin>>n;

    for (size_t i = 0; i < n; i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }

    PlusMinus(arr);  
    return 0; 
    
}