#include<iostream>
#include<string>
using namespace std ;
int main()
{
	string Name ;
	int Age ;
	cout<<"Enter Your Name and Age\n";
	cin>>Name>>Age;
	if(Age>18)
	cout<<"You are elgible";
	else
	cout<<"Not elgible";
	return 0 ;
}
