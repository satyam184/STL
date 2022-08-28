#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>dq;
    // dq.push_front(4);
    // dq.push_back(5);
    // cout<<dq.front();
    // cout<<dq.back();
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        dq.push_front(x);
    }
    while (!dq.empty())
    {
        cout<<dq.back();
        dq.pop_back();
    }
    
    
}