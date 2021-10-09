#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap so phan tu:";
	cin>>n;
	string s;
	cin>>s;
	int pivot=97;
	for (int i=0; i<n; i++)
	{
		if(s[i]<97)
		{
			s[i]+=32;
		}
	}
	for (int j=0; j<n; j++)
	{
		if(int(s[j]==pivot))
		{
			pivot++;
			j=-1;
		}
		else
		{
			cout<<"NO";
			return 0;
		}
	}
	if(pivot<122)
	{
		cout<<"NO";
	}
	else
	{
		cout<<"YES";
	}
}
