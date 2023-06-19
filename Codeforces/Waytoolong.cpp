#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        string word;
        cin >> word;
    if(word.length() >= 10){
        string abbrevation = word[0]+ to_string(word.length()) + word[-10];
        cout<<abbrevation<<endl;
    }
    else
        cout<<word;
    }
    
    
    return 0;
}
