#include<iostream>
#include<algorithm>
using namespace std;
const double EPS=1e-9;

int n,l,v1,v2,k;
inline bool check(double time)
{
	double s=time*v1;
	int cnt=(n+k-1)/k;
	if(s>=1)
	{
		return true;
	}
	double t=1.0*(l-s)/(v2-v1);
	double tt=1.0*(v2-v1)*t/(v1+v2);

	return cnt*t+(cnt-1)*tt<=time;
}
int main()
{
	while(cin>>n>>l>>v1>>v2>>k)
	{
		double s=0,e=1.0*l/v1;
		while(s<e-EPS)
		{
			double mid=(s+e)/2.0;
			if(check(mid)) e=mid;
			else s=mid;
		}
	printf("%.7lf\n",e);
	}
}
