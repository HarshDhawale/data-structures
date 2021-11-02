#include<iostream>
void swap(int&,int&);
void input(int*,int);
void bubblesort(int*,int);
void display(int*,int);
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[n];
    input(a,n);
    bubblesort(a,n);
    display(a,n);
}
void display(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void input(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void bubblesort(int *a,int n)
{
    int i,j;
    int flag;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<(n-1-i);j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
}
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
