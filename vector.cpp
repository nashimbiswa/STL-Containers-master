#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    //traversing
    for(int i=0;i<v.size();++i)
    {
        // cout<<v[i]<<" ";
        // or
        // cout<<v.at(i)<<" ";//throws and exception if index is out of the range
    }
    // initializing while declaring
    // vector<int> v2{1,2,3,4,5};
    // for(auto x:v2)
        // cout<<x<<" ";
    // giving size in the vector
    vector<int> v3(3,10);//10 is value
    // for(auto x:v3)
    //     cout<<x<<" ";
    // auto i=v.begin();
    // cout<<*i;
    // auto it=v.rbegin();
    // cout<<*it;
    // changes the variable
    // for(auto &x:v)
    //     x=23;
    
    // for(auto x:v)
    //     cout<<x<<" ";
    
    // v.pop_back();
    // cout<<"\n"<<
    // cout<<"\n"<<v.back();
    // auto it=v.insert(v.begin()+1,1,23);
    // auto it=v.erase(v.begin()+1);
    // cout<<"\n"<<*it<<"\n";
    // v.clear();
    // if(v.empty())
    //     cout<<"\nVector is empty.";
    // cout<<"\nUpdated vector is:\n";
    vector<int> v2{1,2,3,4,5};
    // cout<<v2.size();
    v2.resize(8,12);//by default it will fill with 0 if type is int 
    // cout<<v2.size();
    for(int i=0;i<v2.size();++i)
    {
        cout<<v2[i]<<" ";
    }
    // for(auto x:v)
    //     cout<<x<<" ";
    return 0;
}
