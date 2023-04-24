// sort according to marks

#include<bits/stdc++.h>
using namespace std;

int myCmp(pair<int,int>p1,pair<int,int> p2)
{
    return p1.second>p2.second;
}
void printSortedWithMarks(vector<int> roll,vector<int> marks,int n)
{
    vector<pair<int,int>>v;
    for(int i=0;i<n;++i)
    {
        // v.push_back({roll[i],marks[i]});
        v.push_back({marks[i],roll[i]});
    }
    // sort(v.begin(),v.end(),myCmp);
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    for(int i=0;i<n;++i)
    {
        cout<<v[i].second<<" "<<v[i].first<<endl;
    }
}


int main(int argc, char const *argv[])
{
    vector<int> v1{1,2,5,4,3};
    vector<int> v2{20,90,89,15,50};
    printSortedWithMarks(v1,v2,5);
    return 0;
}
