#include <iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	if(s.size()%2==0)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	else
	{
		for(int i=0; i<s.size()/2; i++)
		{
			if(int(s[i]==int(s[-i-1])))
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO";
			}
		}
	}
}
