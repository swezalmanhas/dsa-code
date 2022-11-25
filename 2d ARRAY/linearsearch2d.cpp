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
    cout << "enter the key" << endl;
    cin >> key;
}
void swezal::search()
{
    int j;
    for (int i = 0; i < size1; i++)
    {
        for (j = 0; j < size2; j++)
        {
            if (arr[i][j] == key)
            {
                cout << " the number is found " << endl;
            }
            else
            {

                cout << "number is not found" << endl;
            }
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
    obj.search();
    obj.display();

    return 0;
}