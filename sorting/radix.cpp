#include<bits/stdc++.h>
using namespace std;
void countsort(int arr[],int n,int pos)
{
    int k=arr[0];
    for(int i=0;i<n;i++)
    {
        k=max(k,arr[i]);
    }
    int count[100]={0};
    for(int i=0;i<n;i++)
    {
        count[(arr[i]/pos)%10]++;
    }
    for(int i=1;i<=k;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    int output[n];
    
        for(int i=n-1;i>=0;i--)
        {
            output[--count[(arr[i]/pos)%10]]=arr[i];

        }
        for(int i=0;i<n;i++)
        {
            arr[i]=output[i];
        }
    
}
void radixsort(int arr[],int n)
{
    int k=arr[0];
    for(int i=0;i<n;i++)
    {
        k=max(k,arr[i]);
    }
    for(int pos=1;k/pos>0;pos*=10)
    {
        countsort(arr,n,pos);
    }
}
int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    radixsort(arr,n);
    cout<<"enter the sorted array "<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }


return 0;
}
