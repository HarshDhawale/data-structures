 #include<iostream>
 void swap(int &,int &);
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
    int i,j,k;
    for(i=0;i<(n-1);i++)
    {
        j=k=i;
        while(j<n)
        {
          
            if(a[j]<a[k])
            k=j;
            j++;
        }
        swap(a[k],a[i]);
    }
    for(int h=0;h<n;h++)
    {
        cout<<a[h]<<" ";
    }
    

 }
 void swap(int &a,int &b)
 {
     int temp;
     temp=a;
     a=b;
     b=temp;
 }

