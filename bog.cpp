#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    s.erase(unique(s.begin(),s.end()),s.end());
    if(s.length()%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
}
