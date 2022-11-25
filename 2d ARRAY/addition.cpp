#include<bits/stdc++.h>
using namespace std;
class swezal
{
    int row;
    int col;
    int arr1[10][10];
    int arr3[10][10];
    int arr2[10][10];
    public:
    void input();
    void add();
};
void swezal::input()
{
    cout<<"enter the number of row"<<endl;
    cin>>row;
    cout<<"enter the number of columns"<<endl;
    cin>>col;
    cout<<"enter the elemnt in the array"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr1[i][j];
        }
    }
     cout<<"enter the elemnt in the second array"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr2[i][j];
        }
    }
}
void swezal::add()
{
    int i,j;
     for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            arr3[i][j] = arr1[i][j]+arr2[i][j];
    }
    cout<<"Addition Result of Two Given Matrix is:\n";
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            cout<<arr3[i][j]<<" ";
        cout<<endl;
    }
}
int main(){
    swezal obj;
    obj.input();
    obj.add();

return 0;
}
