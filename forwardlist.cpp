#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // forward_list<int> l={10,20,30,40,50};
        // or
    forward_list<int> l;
    l.assign({10,20,30,40,50});
    forward_list<int> l2;
    l2.assign(l.begin(),l.end());
    // for(auto x:l)
    // {
    //     cout<<x<<" ";
    // }
    cout<<"\n";
    

   forward_list<int>l1={15,20,30,67,8,9,89,7,8};
    auto it=l1.insert_after(l1.begin(),50);
    l1.erase_after(it,l.end());
    for(auto x:l1)
    {
        cout<<x<<" ";
    }
    return 0;
}
