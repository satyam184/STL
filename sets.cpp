#include <bits/stdc++.h>
using namespace std;
int main()
{
    // set<int>s;
    unordered_set<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    // for(auto x:s){
    //     cout<<x<<" ";
    //}
    // cout<<"find";
    // int y;
    // cin>>y;
    // auto x=s.find(y);
    // cout<<*x;
    int z;
    cin >> z;
    if (s.count(z))
    {
        cout << "present";
    }
    else
        cout << "not present";
}