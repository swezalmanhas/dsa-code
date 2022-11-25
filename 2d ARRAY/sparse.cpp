
#include<iostream>
using namespace std;

void printSparse(int k, int data[100][3])
{
    for(int i=0;i<k;i++)
    {
        cout<<data[i][0]<<"     "<<data[i][1]<<"    "<<data[i][2]<<endl;
    }
}

int main()
{
    int m1[3][3],m2[3][3];
    
    // matrix1
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>m1[i][j];
        }
    }

    
    
    // matrix 2
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>m2[i][j];
        }
    }
    
    int data1[100][3],data2[100][3];
    
    int k1=0,k2=0;
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(m1[i][j]!=0)
            {
                data1[k1][0]=i;
                data1[k1][1]=j;
                data1[k1][2]=m1[i][j];
            
                k1++;
            }
        }
    }
    
    printSparse(k1,data1);

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(m2[i][j]!=0)
            {
                data2[k2][0]=i;
                data2[k2][1]=j;
                data2[k2][2]=m2[i][j];
            
                k2++;
            }
        }
    }
    
    cout<<endl;
    printSparse(k2,data2);

    int i=0,j=0;
    
    int sum[100][3];
    
    int l=0;
    
    while(i<=k1 and j<=k2)
    {
        if(data1[i][0]==data2[j][0])        // Rows are eq
        {
            if(data1[i][1]==data2[j][1])        // col are eq
            {
                sum[l][0]=data1[i][0];  
                sum[l][1]=data1[i][1];
                sum[l][2]=data1[i][2]+data2[j][2];      // adding data
                
                i++;j++;
                
                if(sum[l][2]!=0)
                {
                    l++;
                }
            }
            else 
            {
                if(data1[i][1]<data2[j][1])    
                {
                    sum[l][0]=data1[i][0];
                    sum[l][1]=data1[i][1];
                    sum[l][2]=data1[i][2];
                    i++;
                    l++;
                }
                else
                {
                    sum[l][0]=data2[j][0];
                    sum[l][1]=data2[j][1];
                    sum[l][2]=data2[j][2];
                    l++;
                    j++;
                }
            }
            
                
        }
        
        else
            {
                if(data1[i][0]<data2[j][0])
                {
                    sum[l][0]=data1[i][0];
                    sum[l][1]=data1[i][1];
                    sum[l][2]=data1[i][2];
                    i++;
                    l++;
                }
                else 
                {
                    sum[l][0]=data2[j][0];
                    sum[l][1]=data2[j][1];
                    sum[l][2]=data2[j][2];
                    j++;
                    l++;
                }
            }
        
    }
    
    while(i<=k1)
    {
        sum[l][0]=data1[i][0];
        sum[l][1]=data1[i][1];
        sum[l][2]=data1[i][2];
        l++;
        i++;
    }
    
    while(j<=k2)
    {
        sum[l][0]=data1[j][0];
        sum[l][1]=data1[j][1];
        sum[l][2]=data1[j][2];
        l++;
        j++;
    }
    
    // printSparse(l,sum);

    cout<<endl;

    for(int i=0;i<l-2;i++)
    {
        cout<<sum[i][0]<<"  "<<sum[i][1]<<"  "<<sum[i][2]<<endl;
    }
    
}