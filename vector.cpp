#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v{10,20,30,40,50};
    cout<<"Array elements are as follows:\n";
    for(auto i=v.begin();i!=v.end();++i)
        cout<<*i<<" ";
    cout<<endl;
    // getting front
    
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    
    auto i=v.insert(v.begin()+2,100);
    for(auto i=v.begin();i!=v.end();++i)
        cout<<*i<<" ";
    cout<<endl;

//  10,20,30,40,50
    auto it=v.insert(v.begin()+2,3,200);
    cout<<*(it+3)<<"\n";
    for(auto i=v.begin();i!=v.end();++i)
        cout<<*i<<" ";
    cout<<endl;

    // delete last element
    // returns deleted element
    it=v.erase(v.end()-1,v.end());
    cout<<*it<<"\n";
    
    for(auto i=v.begin();i!=v.end();++i)
    cout<<*i<<" ";
    cout<<endl;


    
    // delete element form 0 to n-2
    // v.erase(v.begin(),v.end()-1);

    for(auto i=v.begin();i!=v.end();++i)
    cout<<*i<<" ";
    cout<<endl;

    // clear the vector
    // v.clear();
    
    // check vector is empty or not
    if(v.empty()==true)
        cout<<"Vector is empty.\n";
    
    // resize the vector
    v.resize(5);

    // resize and fill the remaining space with 33
    v.resize(8,33);
    
    for(auto i=v.begin();i!=v.end();++i)
    cout<<*i<<" ";
    cout<<endl;

    cout<<v.size()<<"\n";
    cout<<v.capacity()<<"\n";

    
    v.resize(100);
    cout<<v.capacity()<<"\n";

    return 0;
}
