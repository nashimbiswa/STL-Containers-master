#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // Approach 1 to declare.
    vector<vector<int>> v
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    
    cout<<"Approach 1 to access elements:\n";
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j <v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Approach 2 to access elements:\n";
    for(auto x:v)
    {
        for(auto val:x)
        {
            cout<<val<<" ";
        }
        cout<<"\n";
    }

    // Approach 2 of creating array.
    // Creating jagged array with 5 rows
     /*   
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5 
        1
    */    
    int row=5;
    int column[5]={2,3,4,5,1};
    vector<vector<int>> v1(row);
    
    for(int i=0;i<row;++i)
    {
        int col=column[i];
        v1[i]=vector<int>(col);
        for(int j=0;j<col;++j)
        {
            v1[i][j]=j+1;
        }
    }

    cout<<"Jugged array elements are as follows:\n";
    for(int i=0;i<v1.size();++i)
    {
        for(int j=0;j<v1[i].size();++j)
        {
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }

    // Approach 3
    // Suppose we want to initialize a 2D vector of “n” rows and “m” columns, with a value 0.
    int n=3,m=4;
    vector<vector<int>>v3(n,vector<int>(m,0));
    cout<<"Array n*m with all values 0:\n";
    for(auto x:v3)
    {
        for(auto res:x)
            cout<<res<<" ";
        cout<<"\n";
    }

    // Approach 3 with user defined row and column
    int r,c;
    cout<<"Enter the rows and columns:\n";
    cin >>r>> c;
    vector<vector<int>> v4(r,vector<int>(c));
    for(auto &x:v4)
    {
        int value=1;
        for(auto &val:x)
        {
            val=value;
            ++value;
        }
    }
    cout<<"r *c values are as follows:\n";
    for(auto x:v4)
    {
        for(auto val:x)
        {
          cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}
