 #include<bits/stdc++.h>
using namespace std;                                     
int merge(int *arr,int s, int e)
{
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int[len1];
    int *second=new int[len2];

    int mainArrayIndex=s;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[mainArrayIndex++];
    }
    int index1=0;
    int index2=0;
    mainArrayIndex=s;
    while(index1 < len1 && index2 < len2)
    {
        if(first[index1]<second[index2])
        {
            arr[mainArrayIndex++]=first[index1++];
        } else{
            arr[mainArrayIndex++]=second[index2++];
        }
    }
    while(index1<len1)
    {
         arr[mainArrayIndex++]=first[index1++];
    }
     while(index2<len2)
    {
         arr[mainArrayIndex++]=second[index2++];
    }
    delete[]first;
    delete[]second;
}
void mergesort(int arr[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}
int main(){
    int arr[100];
    int size;
    int i;
    cout<<"enter the size of the array "<<endl;
    cin>>size;
    cout<<"enter the array "<<endl;
    for( i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"the sorted array is "<<endl<<endl;
    mergesort(arr,0,size-1);
    for(int j=0;j<size;j++){

    cout<<arr[j]<<endl;
    }
    cout<<endl;

return 0;
}

  