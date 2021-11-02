#include<iostream>
using namespace std;
main()
{
	int x,n;
	cin>>x>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int high=n-1,low=0;    
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==x)
		{
		    cout<<mid;
		    break;
	    }
		if(a[mid]<x)
		low=mid+1;
		if(a[mid]>x)
		high=mid-1;
	}
	if(low>high)
	cout<<"-1";
}
