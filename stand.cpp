#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	int n,t;
	cin>>n>>t;
	cin>>s;
	while(t--)
	{
		for(int i=1;i<n;i++)
		{
			if(s[i]=='G'&& s[i-1]=='B')
			{
				s[i]='B';
				s[i-1]='G';
				i++;

			}
		}
	}
	cout<<s;
	return 0;
}