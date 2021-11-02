#include<iostream>
void QuickSort(int*,int,int);
int partition(int*,int,int);
void input(int*,int);
void display(int*,int);
void swap(int*,int*);

using namespace std;
main()
{
    int n;
	cin>>n;
	int a[n];
	input(a,n);
	int l=0,h=n-1;
	QuickSort(a,l,h);
	display(a,n);
	
}
void input(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int partition(int *a,int l,int h)
{
	int pivot=a[l];
	int i=l,j=h;
	while(i<j)
	{
		while(a[i]<=pivot)
		i++;
		while(a[j]>pivot)
		j--;
		if(i<j)
		swap(&a[i],&a[j]);
	}
	swap(a[l],a[j]);
	return j;
}
void QuickSort(int *a,int l,int h)
{
	int j;
	if(l<h)
	{
		j=partition(a,l,h);
		QuickSort(a,l,j-1);
		QuickSort(a,j+1,h);
	}
}
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
void display(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
