#include<iostream>
using namespace std;

#include<array>
int main(){
    array<int,4>a={1,2,3,4}; //static array..
    cout<<a.size()<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    cout<<a.empty()<<endl;
    cout<<a.at(2)<<endl;

}