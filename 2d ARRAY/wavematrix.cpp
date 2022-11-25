#include <bits/stdc++.h>
using namespace std;
class swezal
{
    int arr[10][10];
    int size1;
    int size2;

public:
    void input();
    void wave();
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
void swezal::wave()
{
    for (int col = 0; col < size2; col++)
    {
        if (col%2!=0)
        {
            for (int row = size1; row >= 0 ; row--)
            {
                cout << arr[row][col] << "  ";
            }
        }
            else

                for (int row = 0; row < size1; row++)
                {
                    cout << arr[row][col]<<"  ";
                }

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
    obj.wave();

    return 0;
}