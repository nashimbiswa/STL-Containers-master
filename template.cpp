#include<bits/stdc++.h>
using namespace std;

template<typename t> 
t findMax(t x,t y)
{
    return x>y?x:y;
}
int main(int argc, char const *argv[])
{
    cout<<findMax<char>('a','b');
    return 0;
}
