#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<set>
using namespace std;
	map<char,int>m;
int main()
{
	int n;
	cin>>n;
	set<char>S;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
		S.insert(s[i]);
	int all=S.size();
	int ss=0,e=0;
	int ans=0;
	while(e<n)
	{
		m[s[e]]++;
		if(m[s[e]]==1) ans++;

		if(ans==all)
		{
			while(m[s[ss]]==1) 
			{
				m[s[ss]]--;
				ss++;
			}
		}
		ans=min(ans,e-ss+1);
		e++;
	}
	cout<<ans<<endl;

}
