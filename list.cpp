#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l;
    l.push_front(10);
    l.push_back(20);
    l.push_front(30);

    list<int> ::iterator it;
    for (it=l.begin();it!=l.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    l.reverse();
    for(it=l.begin();it!=l.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    l.sort();
    for(it=l.begin();it!=l.end();it++){
        cout<<*(it)<<" ";

    }
    cout<<endl;
    l.pop_front();
    for(it=l.begin();it!=l.end();it++){
        cout<<*(it)<<" ";}
    cout<<endl;
    l.pop_back();
    for(it=l.begin();it!=l.end();it++){
        cout<<*(it)<<" ";}




}