 #include<bits/stdc++.h>
using namespace std;
class swezal 
{
    int arr[10][10];
    int row;
    int col;
    int key;
    int loc;
    public:
    void input();
    void search();
    void display();
};
void swezal::input()
{
    
    cout << "enter the size of row" << endl;
    cin >> row;
    cout << "enter the size of column" << endl;
    cin >> col;

    cout << "enter the array" << endl;
    for (int i = 0; i <row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<<"enter the elemnt to be found"<<endl;
    cin>>key;

}
void swezal::search()
{
    int start=0;
    int end=row*col-1;
    int mid=start+(end-start)/2;
    while(start<end)
    {
        int element=arr[mid/col][mid%col];
        if(element==key)
        {
            loc=mid;
        }
        if(element<key)
        {
            start=mid+1;
        }else
        end=mid-1;
    }
    mid=start+(end-start)/2;
}

    void swezal::display()
{
   if(loc>0)
   {
       cout<<"the postion of the array"<<endl<<loc<<endl;
   }
   else{
       cout<<"element are not present"<<endl;
   }
}

int main(){
    swezal obj;
    obj.input();
    obj.search();
    obj.display();

return 0;
}

