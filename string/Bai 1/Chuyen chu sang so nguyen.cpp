#include <iostream>
using namespace std;
int main()
{
	string mystring;
	cin>>mystring;
	for(int i=0; i<mystring.size(); i++)
	{
		cout<<int(mystring[i])<<" ";
	}
	
}
