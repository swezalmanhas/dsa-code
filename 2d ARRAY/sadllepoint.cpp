#include<bits/stdc++.h>
using namespace std;
class swezal
{
    int row;
    int col;
    int arr[3][3];
    public:
    void input() ;
    void saddle();
    
};
void swezal::input()
{
    cout<<"enter the number of row "<<endl;
    cin>>row;
    cout<<"enter the number of columns"<<endl;
    cin>>col;
    cout<<"enter the matrix"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
}

void swezal::saddle()
{ 
    int i;
    int j;

    for( i=0;i<row;i++)
    {
        for( j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    cout<<" "<<endl;
    }
    for( i=0;i<row;i++)
    {
        int min_row=arr[i][0];
        int col_ind=0;
        for( j=1;j<col;j++)
        {
            if(min_row>arr[i][j])
            {
                min_row=arr[i][j];
                col_ind=j;
            }
        }
        int k;
        for(k=0;k<row;k++)
        if(min_row<arr[k][col_ind])
        break;
        if(k==row);
        {

        cout<<"the saddle point is "<<"  "<<min_row<<endl;
        }
    }
}

    

int main(){
    swezal obj;
    obj.input();
    obj.saddle();

return 0;
}
