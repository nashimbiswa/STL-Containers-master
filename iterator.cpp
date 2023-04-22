#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v{10,11,12,13,14,15};
    vector<int>::iterator i;
    i=v.begin();
    advance(i,2);
    cout<<*i;
    return 0;
}
