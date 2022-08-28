#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return a.first > b.first;
}
int main()

{
    int n;
    cin>>n;
    vector<pair<int,int> > v;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),comp);
    for (int i = 0; i < n; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
    
    
}