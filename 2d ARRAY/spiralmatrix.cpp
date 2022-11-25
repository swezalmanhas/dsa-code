#include <bits/stdc++.h>
using namespace std;
class swezal
{
    int arr[10][10];
    int size1;
    int size2;

public:
    void input();
    void spiral();
    void display();
};
void swezal::input()
{
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
}
void swezal::spiral()
{
    cout<<endl<<endl<<endl;
    int count = 0;
    int total = size1*size2;
    int startingrow = 0;
    int startingcol = 0;
    int endrow = size1 - 1;
    int endcol = size2 - 1;
    cout<<endl;
    cout<<"the spiral matix is"<<endl;
    while (count < total)
    {
    
        for (int index = startingcol; index <= endcol; index++)
        {
            cout <<arr[startingrow][index]<<" ";
            count++;
        }
    
        startingrow++;
        for (int index = startingrow; index <= endrow; index++)
        {
            cout<< arr[index][endcol]<<" ";
             count++;
        }
        
        endcol--;
        for (int index = endcol; index >= startingcol; index--)

        {
            cout<<arr[endrow][index]<<" ";
             count++;
        }
       
        endrow--;
        for (int index = endrow; index >= startingrow; index--)
        {
            cout<<arr[index][startingcol]<<" ";
             count++;
        }
        
        startingcol++;
         
    }
}
void swezal::display()
{
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
    obj.display();
    obj.spiral();

    return 0;
}