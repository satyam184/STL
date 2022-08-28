#include<bits/stdc++.h>
using namespace std;
int main()
{
   // pair<int,int> p;
   pair<int,pair<int,int>>p;
    p.first=10;
    //p.second=20;
    p.second.first=1;
    p.second.second=2;
    //cout<<"{"<<p.first<<","<<p.second<<"}";
    cout<<"{"<<p.first<<","<<"{"<<p.second.first<<","<<p.second.second<<"}"<<"}";
}