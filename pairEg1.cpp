// Sorting on the basis of other
#include<iostream>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;

// More details in tablet
vector<char> Sorting(int arr1[],char arr2[],int n)
{
    pair<int,char>p[n];
    for(int i=0;i<n;++i)
    {
        p[i]={arr1[i],arr2[i]};
    }
    sort(p,p+n);
    vector<char> v;
    for(int i=0;i<n;++i)
    {
        v.push_back(p[i].second);
    }
    return v;
}

int main(int argc, char const *argv[])
{
    int arr1[]={5,3,2,1,6,4};
    char arr2[]={'a','b','c','d','e','f'};
    vector<char> c=Sorting(arr1,arr2,6);
    for(auto res:c)
        cout<<res<<" ";
    return 0;
}
