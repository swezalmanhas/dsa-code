#include <bits/stdc++.h>
using namespace std;
class swezal
{
    int arr[10][10];
    int size1;
    int size2;
    int key;

public:
    void input();
    void search();
    void sum();
    void sumcolumn();
    void largrow();
     void largcol();
    void display();
};
void swezal::input()
{
    cout<<endl<<endl;
    cout << "enter the size of row" << endl;
    cin >> size1;
    cout << "enter the size of column" << endl;
    cin >> size2;

    cout << "enter the array" << endl;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "enter the key" << endl;
    cin >> key;
}
void swezal::search()
{
    cout<<endl<<endl;
    int j;
    for (int i = 0; i < size1; i++)
    {
        for (j = 0; j < size2; j++)
        {
            if (arr[i][j] == key)
            {
                cout << " the number is found on " << endl;
            }
            else
            {

                cout << "the number is not found " << endl;
            }
        }
    }
}
void swezal::sum()
{
    cout<<endl<<endl;
    for (int i = 0; i < size1; i++)
    {
    int sum=0;
        for (int j = 0; j < size2; j++)
        {
            sum=sum+arr[i][j];

        }
        cout<<"the sum of the row elemnt is "<<"  "<<sum<<endl;
    }
    cout<<endl;

}
void swezal::sumcolumn()
{
    cout<<endl<<endl;

    for (int j = 0; j < size2; j++)
    {
       int sum=0;
        for (int i = 0; i < size1; i++)
        {
           sum=sum+arr[i][j];
        }
        cout <<"the sum of the column "<<"  "<<sum<< endl;
    }
}
void swezal::largrow()
{
    cout<<endl<<endl;
    int maxi=INT16_MIN;
    int rowindex=-1;
    int row;
      for ( row = 0; row < size1; row++)
    {
       int sum=0;
        for (int col = 0; col < size2; col++)
        {
           sum=sum+arr[row][col];
        }
       if(sum>maxi)
       {
           maxi=sum;
           rowindex=row;
       }
    }
    cout<<"the largest row sum  we found"<<" "<<maxi<<endl;
    cout<<"the index of the row is"<<" "<<rowindex<<endl;

}
void swezal::largcol()
{
    cout<<endl<<endl;
    int maxi=INT16_MIN;
    int colindex=-1;
    int col;
      for ( col = 0; col < size2; col++)
    {
       int sum=0;
        for (int row = 0; row < size1; row++)
        {
           sum=sum+arr[row][col];
        }
       if(sum>maxi)
       {
           maxi=sum;
           colindex=col;
       }
    }
    cout<<"the largest col sum  we found"<<" "<<maxi<<endl;
    cout<<"the index of the col is"<<" "<<colindex<<endl;

}
void swezal::display()
{
    cout<<endl<<endl;
    cout << "the array is" << endl;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cout << "  " << arr[i][j];
        }
        cout << endl;
    }
}

int main()
{
    swezal obj;
    obj.input();
    // obj.search();
    obj.sum();
    obj.sumcolumn();
    obj.largrow();
    obj. largcol();
    obj.display();

    return 0;
}