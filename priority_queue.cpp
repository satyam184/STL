#include<bits/stdc++.h>
using namespace std;
int main(){
    //priority_queue<int>pq; max 
    priority_queue<int,vector<int>,greater<int>>pq;//min
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        pq.push(x);
    }
    while (!pq.empty())
    {
        
        cout<<pq.top();
        pq.pop();
    }
    
    

}