#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n;
    // int arr[n];
    // cin>>n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    // int ma;
    // ma=*max_element(arr,arr+n);
    // cout<<ma;

    // string s="BCA";
    // do
    // {
    //     cout<<s<<endl;
    // } while (next_permutation(s.begin(),s.end())); 

    // int m;
    // cin>>m;
    // int ans=__builtin_popcount(m);
    // cout<<ans;
    

    // in binary search array should be sorted. 
    //T(o)=log(n)
    
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if(binary_search(a,a+n,10)){
        cout<<"persent";
    }
    else{
        cout<<"absent";
    }

    
    
}