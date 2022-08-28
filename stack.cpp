#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n;
    cin>>x;
    stack<int> s;
    for (int i = 0; i < x; i++)
    {
        cin>>n;
        s.push(n);
        
    }
    while(!s.empty())
    {
        cout<< s.top() <<endl; 
        s.pop() ; 

        
    }
    cout<<"current size : " <<s.size() <<endl ;
    
    


    
}