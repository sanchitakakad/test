#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max1[n],parent[n];
	for(int i=0;i<n;i++)
	{
		parent[i]=i; 
		max1[i]=a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]<a[i])
			{
				max1[i]=max(max1[i],a[i]+max1[j]);
				parent[i]=j;
			}
			else
			{
				continue;
			}
		}
	}
	sort(max1,max1+n);
	cout<<max1[n-1]<<endl;

}
