#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int len = s.size()-1;
	if(len>11)
	{
		cout<<"False";
		return 0;
	}
	bool flag = true;
	for(int i=0;i<4;i++)
	{
		if(!(s[i]>='A' && s[i]<='Z'))
		{
			flag = false;
			break;
		}
	}
	if(s[4]!='0')
	{
		cout<<"False";
		return 0;
	}
	if(flag==false)
	{
		cout<<"False";
	}
	else
	cout<<"True";
	return 0;
}
