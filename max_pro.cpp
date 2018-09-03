#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,i,a[100001];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	int maxi = 0;
	int pro;
	int c = 0;
	int flag = 0;
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{	
			if(!flag)
			{
				pro = a[i];
				flag = 1;
				c = 1;
			}
			else
			{
				pro *= a[i];
				c++;
				
			}
			maxi = max(c,maxi);
		}
		else
		{
			flag = 0;
			c = 0;
		}		
	}
	cout<<maxi<<endl;
	return 0;
}
