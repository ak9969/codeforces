#include <iostream>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	int c=0;
	while(n!=0)
	{
		if(n%10==4||n%10==7)
			c++;
			n=n/10;
	}
	if(c==4||c==7)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}

	return 0;
}