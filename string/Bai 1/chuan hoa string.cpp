#include <iostream>
using namespace std;
int main()
{
	string mystring="";
	cin>>mystring;
	for(int i=0; i<mystring.size(); i++)
	{
		if(int(mystring[i])==int(mystring[i+1]))
		{
			cout<<mystring.erase(i, 1);
		}
	}
}
