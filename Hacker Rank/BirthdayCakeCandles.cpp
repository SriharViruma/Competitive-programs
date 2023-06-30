#include<iostream>
#include<vector>
using namespace std;
int BirthdayCakeCandles(vector<int> candles)
{   
    int max = 0,count = 0;

    for (int i = 0; i < candles.size(); i++)
    {
        if (candles[i] > max)
        {
            max = candles[i];
            count = 1;
        }  

        else if (max == candles[i])
        count++;
    }
    return count;
    
}

int main()
{
    vector<int> candles;
    int temp,n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        candles.push_back(temp);
    }
    int tallest = BirthdayCakeCandles(candles);
    cout<<tallest;
    return 0;
}