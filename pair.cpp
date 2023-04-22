#include<iostream>
#include<utility>
using namespace std;

int main(int argc, char const *argv[])
{
    pair<int,int> p1;
    p1={1,2};
    pair<int,int> p2(1,3);
    // comaprasion operator in pair
    cout<<(p1==p2)<<endl;
    
    swap(p1,p2);
    cout<<p1.second;
    
    return 0;
}
