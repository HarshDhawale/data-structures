#include<iostream>
using namespace std;
main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int i,j,x;
	for(int i=1;i<n;i++)
	{
		
		j=i-1;
		x=a[i];
		while(j>=0 && a[j]>x)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
