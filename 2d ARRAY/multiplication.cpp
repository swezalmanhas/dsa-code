#include<bits/stdc++.h>
using namespace std;
class swezal
{
    int row1;
    int row2;
    int col1;
    int col2;
    int arr1[10][10];
    int arr2[10][10];
    public:
    void input();
    void multi();
};
void swezal::input()
{
    cout<<"enter the number of row of first matrix"<<endl;
    cin>>row1;
     cout<<"enter the number of col of first matrix"<<endl;
    cin>>col1;
    cout<<"enterthe elemnt of firest matrix"<<endl;
     for(int i=0;i<row1;i++)
    {
         for(int j=0;j<col1;j++)
         {
             cin>>arr1[i][j];
         }
     }
    
     cout<<"enter the number of row of second matrix"<<endl; 
    cin>>row2;
     cout<<"enter the number of  of col2 first matrix"<<endl;
    cin>>col2;
    cout<<"enter the elemnt in the second array"<<endl;
     for(int i=0;i<row2;i++)
    {
         for(int j=0;j<col2;j++)
         {
             cin>>arr2[i][j];
         }
     }
    
}
 void swezal::multi()
{
    int k,i,j;
    int product[10][10];
    if (col1 != row2) {
      cout<<"Column of first matrix should be equal to row of second matrix"<<endl;
}else{
    {
      cout<<"The first matrix is:"<<endl;     // pehle matrix ko show kiya hai 
      for(i=0; i<row1; ++i) {
         for(j=0; j<col1; ++j)
         cout<<arr1[i][j]<<" ";
         cout<<endl;
      }
      cout<<endl;
      cout<<"The second matrix is:"<<endl;          // second matrix ko show kiya hai 
      for(i=0; i<row2; ++i) {
         for(j=0; j<col2; ++j)
         cout<<arr2[i][j]<<" ";
         cout<<endl;
      }
      cout<<endl;
      
      for(i=0; i<row1; ++i)
      for(j=0; j<col2; ++j) {
         product[i][j] = 0;
      }
      for(i=0; i<row1; ++i)
      for(j=0; j<col2; ++j)
      for(k=0; k<col1; ++k) {
         product[i][j]+=arr1[i][k]*arr2[k][j];
      }
      cout<<"Product of the two matrices is:"<<endl;
      for(i=0; i<row1; ++i) {
         for(j=0; j<col2; ++j)
         cout<<product[i][j]<<" ";
         cout<<endl;
      }
   }

}
}

int main(){
    swezal obj;
    obj.input();
    obj.multi();

return 0;
}