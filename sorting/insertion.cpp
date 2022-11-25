#include<bits/stdc++.h>
using namespace std;
class swezal
{
    int arr[100];
    int size;
    public:
    void insert();
    void sort();
    void diplay();
};
void swezal::insert()
{
    cout<<"enter the size of the arrya "<<endl;
    cin>>size;
    cout<<"enter the array "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void swezal::sort()
{
    for(int i=1;i<size;i++)
    {
        int temp=arr[i];
        int j;
        for( j=i-1;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
         arr[j+1]=temp;
    }
}

void swezal::diplay()
{
      cout<<"the new araay is  "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }

}

int main(){
swezal obj;
obj.insert();
obj.sort();
obj.diplay();
return 0;
}