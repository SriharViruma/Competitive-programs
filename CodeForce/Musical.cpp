#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,s;
    string notes,str="";
    cin>>n;
     int k=-1;
    for(int i = 0;i < n; i++){
        cin>>s>>notes;
       str += notes[i];
       str += notes[i+1];
       string sarr[50];
        bool check=0;
       for (int j = 0; j < k+1; j++)
       {
            if (str == sarr[j])
            {
                check=1;
            }
            
       }
       if(check=0){
            k++;
            sarr[k]=str;
       }  
       cout<<k+1<<endl;
       str="";
        
    }
}