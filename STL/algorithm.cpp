#include<iostream>
#include<vector>
using namespace std;

#include<algorithm>
int main(){
    vector<int>v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=3,b=5;

    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;

    swap(a,b);
    cout<<a<<" "<<b<<endl;

    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<abcd<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());//Working: Based on Introsort--3 algo ka combi..
    for(int i:v){           // quick sort,heap sort,insertion sort;
        cout<<i<<" ";
    }cout<<endl;

}